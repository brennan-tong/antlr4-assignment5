#include "MyExprVisitor.h"
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

antlrcpp::Any MyExprVisitor::visitConstDeclaration(ExprParser::ConstDeclarationContext *context) {
    std::string identifier = context->IDENTIFIER()->getText();
    antlrcpp::Any value = visit(context->expression());
    // Check if the constant is already declared in the current scope
    if (symbolTable.isDeclaredInCurrentScope(identifier)) {
        std::cerr << "Error: Constant " << identifier << " is already declared in the current scope.\n";
    } else {
        symbolTable.addConstant(identifier, value);
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitVarDeclaration(ExprParser::VarDeclarationContext *context) {
    std::string identifier = context->IDENTIFIER()->getText();
    std::string type = context->typeIdentifier()->getText();
    // Check if the variable is already declared in the current scope
    if (symbolTable.isDeclaredInCurrentScope(identifier)) {
        std::cerr << "Error: Variable " << identifier << " is already declared in the current scope.\n";
    } else {
        symbolTable.addVariable(identifier, type);
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) {
    std::string identifier = context->IDENTIFIER()->getText();
    Typedef typeDef = std::any_cast<Typedef>(visit(context->typeSpecification()));
    // Check if the typedef is already declared in the current scope
    if (symbolTable.isDeclaredInCurrentScope(identifier)) {
        std::cerr << "Error: Typedef " << identifier << " is already declared in the current scope.\n";
    } else {
        symbolTable.addTypedef(identifier, typeDef);
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

void MyExprVisitor::printSymbolTables() {
    symbolTable.print();
}

// ... Implement visit methods for other relevant rules, such as subranges, arrays, error handling, etc.
