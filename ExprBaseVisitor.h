
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual std::any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment(ExprParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramDeclaration(ExprParser::ProgramDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(ExprParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDeclaration(ExprParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstExpression(ExprParser::ConstExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(ExprParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclarationList(ExprParser::VarDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarIdentifierList(ExprParser::VarIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefList(ExprParser::TypeDefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDefElement(ExprParser::TypeDefElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifier(ExprParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecification(ExprParser::TypeSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleType(ExprParser::SimpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColorList(ExprParser::ColorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldList(ExprParser::FieldListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubrange(ExprParser::SubrangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamDeclaration(ExprParser::ParamDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ExprParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ExprParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteln(ExprParser::WritelnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(ExprParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(ExprParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(ExprParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayIndexing(ExprParser::ArrayIndexingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ExprParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(ExprParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(ExprParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(ExprParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterConstant(ExprParser::CharacterConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringConstant(ExprParser::StringConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

