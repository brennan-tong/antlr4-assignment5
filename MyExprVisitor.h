#ifndef MY_EXPR_VISITOR_H
#define MY_EXPR_VISITOR_H

#include "ExprBaseVisitor.h"
#include "SymbolTable.h"
#include "ExprParser.h"
#include "TypedefStructure.h"

class MyExprVisitor : public ExprBaseVisitor {
public:
    MyExprVisitor();

    antlrcpp::Any visitProg(ExprParser::ProgContext *context) override;
    antlrcpp::Any visitDeclaration(ExprParser::DeclarationContext *context) override;
    antlrcpp::Any visitConstDeclaration(ExprParser::ConstDeclarationContext *context) override;
    antlrcpp::Any visitVarDeclaration(ExprParser::VarDeclarationContext *context) override;
    antlrcpp::Any visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) override;
    antlrcpp::Any visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *context) override;
    antlrcpp::Any visitTypeSpecification(ExprParser::TypeSpecificationContext *context) override;
    antlrcpp::Any visitArrayIndexing(ExprParser::ArrayIndexingContext *ctx) override;
    antlrcpp::Any visitVariable(ExprParser::VariableContext *ctx) override;
    antlrcpp::Any visitAssignment(ExprParser::AssignmentContext *ctx) override;



    void printSymbolTables();
    void printParseTree(antlr4::tree::ParseTree *node, ExprParser *parser, std::ostream &output, int depth = 0);

private:
    SymbolTable symbolTable;
};

#endif // MY_EXPR_VISITOR_H
