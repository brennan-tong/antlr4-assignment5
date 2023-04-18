#include "MyExprVisitor.h"
#include "ExprVisitor.h"
#include <iostream>

MyExprVisitor::MyExprVisitor() : symbolTable() {}

antlrcpp::Any MyExprVisitor::visitProg(ExprParser::ProgContext *context) {
    symbolTable.pushScope();
    visitChildren(context);
    symbolTable.popScope();
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitDeclaration(ExprParser::DeclarationContext *context) {
    return visitChildren(context);
}

antlrcpp::Any MyExprVisitor::visitArrayIndexing(ExprParser::ArrayIndexingContext *ctx) {
    visit(ctx->variable());
    for (auto exprCtx : ctx->expression()) {
        visit(exprCtx);
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitConstDeclaration(ExprParser::ConstDeclarationContext *context) {
    size_t numDeclarations = context->IDENTIFIER().size();
    for (size_t i = 0; i < numDeclarations; ++i) {
        std::string identifier = context->IDENTIFIER(i)->getText();
        antlrcpp::Any value = visit(context->constExpression(i));
        // Check if the constant is already declared in the current scope
        if (symbolTable.isDeclaredInCurrentScope(identifier)) {
            std::cerr << "Error: Constant " << identifier << " is already declared in the current scope.\n";
        } else {
            symbolTable.addConstant(identifier, value);
        }
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitVarDeclaration(ExprParser::VarDeclarationContext *context) {
    for (auto varDeclListCtx : context->varDeclarationList()) {
        for (auto id : varDeclListCtx->varIdentifierList()->IDENTIFIER()) {
            std::string identifier = id->getText();
            std::string type = varDeclListCtx->typeIdentifier()->getText();
            // Check if the variable is already declared in the current scope
            if (symbolTable.isDeclaredInCurrentScope(identifier)) {
                std::cerr << "Error: Variable " << identifier << " is already declared in the current scope.\n";
            } else {
                symbolTable.addVariable(identifier, type);
            }
        }
    }
    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) {
    for (auto typeDefElemCtx : context->typeDefList()->typeDefElement()) {
        std::string identifier = typeDefElemCtx->IDENTIFIER()->getText();
        antlrcpp::Any typeDefAny = visit(typeDefElemCtx->typeSpecification());

        if (typeDefAny.type() == typeid(Typedef)) {
            Typedef typeDef = std::any_cast<Typedef>(typeDefAny);
            // Check if the typedef is already declared in the current scope
            if (symbolTable.isDeclaredInCurrentScope(identifier)) {
                std::cerr << "Error: Typedef " << identifier << " is already declared in the current scope.\n";
            } else {
                symbolTable.addTypedef(identifier, typeDef);
            }
        }
    }
    return nullptr;
}



antlrcpp::Any MyExprVisitor::visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *context) {
    std::string identifier = context->IDENTIFIER()->getText();
    std::string returnType = context->typeIdentifier()->getText();
    // Check if the function is already declared in the current scope
    if (symbolTable.isDeclaredInCurrentScope(identifier)) {
        std::cerr << "Error: Function " << identifier << " is already declared in the current scope.\n";
    } else {
        symbolTable.addFunction(identifier, returnType);
    }

    symbolTable.pushScope();
    // Visit parameter declarations and the function body
    visitChildren(context);
    symbolTable.popScope();

    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitTypeSpecification(ExprParser::TypeSpecificationContext *ctx) {
    if (ctx->ARRAY().size() == 1) {
        ExprParser::SubrangeContext *subrangeCtx = ctx->subrange(0);
        std::string elementType = ctx->typeIdentifier()->getText();
        return Typedef::array(*subrangeCtx, elementType);
    } else if (ctx->ARRAY().size() == 2) {
        ExprParser::SubrangeContext *outerSubrangeCtx = ctx->subrange(0);
        ExprParser::SubrangeContext *innerSubrangeCtx = ctx->subrange(1);
        std::string elementType = ctx->typeIdentifier()->getText();
        return Typedef::arrayOfArray(*outerSubrangeCtx, *innerSubrangeCtx, elementType);
    } else if (ctx->ARRAY().size() == 3) {
        ExprParser::SubrangeContext *outerSubrangeCtx = ctx->subrange(0);
        ExprParser::SubrangeContext *middleSubrangeCtx = ctx->subrange(1);
        ExprParser::SubrangeContext *innerSubrangeCtx = ctx->subrange(2);
        std::string elementType = ctx->typeIdentifier()->getText();
        return Typedef::arrayOfArrayOfArray(*outerSubrangeCtx, *middleSubrangeCtx, *innerSubrangeCtx, elementType);
    } else {
        // subrange case
        return visitChildren(ctx);
    }
}


void MyExprVisitor::printSymbolTables() {
symbolTable.print();
}

void MyExprVisitor::printParseTree(antlr4::tree::ParseTree *node, ExprParser *parser, std::ostream &output, int depth) {
    if (!node) {
        return;
    }

    for (int i = 0; i < depth; ++i) {
        output << " ";
    }

    auto ruleContext = dynamic_cast<antlr4::ParserRuleContext*>(node);
    if (ruleContext) {
        output << parser->getRuleNames()[ruleContext->getRuleIndex()];
    } else {
        output << node->toString();
    }

    output << std::endl;

    for (size_t i = 0; i < node->children.size(); ++i) {
        printParseTree(node->children[i], parser, output, depth + 1);
    }
}
