#ifndef MY_EXPR_VISITOR_H
#define MY_EXPR_VISITOR_H

#include "ExprBaseVisitor.h"
#include "SymbolTable.h"

class MyExprVisitor : public ExprBaseVisitor {
public:
    MyExprVisitor();

    antlrcpp::Any visitProg(ExprParser::ProgContext *context) override;
    antlrcpp::Any visitDeclaration(ExprParser::DeclarationContext *context) override;
    antlrcpp::Any visitConstDeclaration(ExprParser::ConstDeclarationContext *context) override;
    antlrcpp::Any visitVarDeclaration(ExprParser::VarDeclarationContext *context) override;
    antlrcpp::Any visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) override;
    antlrcpp::Any visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *context) override;
    void printSymbolTables();

private:
    SymbolTable symbolTable;
};

#endif // MY_EXPR_VISITOR_H
