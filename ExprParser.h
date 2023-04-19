
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, COMMENT = 2, COLON = 3, QUOTEMARK = 4, QMARK = 5, EXMARK = 6, 
    NEWLINE = 7, WS = 8, AND = 9, ARRAY = 10, ASM = 11, BEGIN = 12, BREAK = 13, 
    CASE = 14, CONST = 15, CONSTRUCTOR = 16, CONTINUE = 17, DESTRUCTOR = 18, 
    DIV = 19, DO = 20, DOWNTO = 21, ELSE = 22, END = 23, FALSE = 24, FILE = 25, 
    FOR = 26, FUNCTION = 27, GOTO = 28, IF = 29, IMPLEMENTATION = 30, IN = 31, 
    INLINE = 32, INTERFACE = 33, LABEL = 34, MOD = 35, NIL = 36, NOT = 37, 
    OBJECT = 38, OF = 39, ON = 40, OPERATOR = 41, OR = 42, PACKED = 43, 
    PROCEDURE = 44, PROGRAM = 45, RECORD = 46, REPEAT = 47, SET = 48, SHL = 49, 
    SHR = 50, QUOTE = 51, CHARACTER = 52, STRING = 53, THEN = 54, TO = 55, 
    TRUE = 56, TYPE = 57, UNIT = 58, UNTIL = 59, USES = 60, VAR = 61, WHILE = 62, 
    WRITELN = 63, WITH = 64, XOR = 65, INTEGER = 66, RANGE = 67, REAL = 68, 
    IDENTIFIER = 69, PLUSOP = 70, MINUSOP = 71, DIVOP = 72, MULTOP = 73, 
    ASSIGN = 74, EQUAL = 75, NE = 76, LTEQ = 77, GTEQ = 78, LT = 79, GT = 80, 
    PLUSEQUAL = 81, MINUSEQUAL = 82, MULTEQUAL = 83, DIVEQUAL = 84, CARAT = 85, 
    SEMICOLON = 86, COMMA = 87, LPAREN = 88, RPAREN = 89, LBRACKET = 90, 
    RBRACKET = 91, LBRACE = 92, RBRACE = 93, LCOMMENT = 94, RCOMMENT = 95
  };

  enum {
    RuleProg = 0, RuleComment = 1, RuleProgramDeclaration = 2, RuleDeclaration = 3, 
    RuleConstDeclaration = 4, RuleConstAssignmentList = 5, RuleConstExpression = 6, 
    RuleVarDeclaration = 7, RuleVarDeclarationList = 8, RuleVarIdentifierList = 9, 
    RuleTypeDefDeclaration = 10, RuleTypeDefList = 11, RuleTypeDefElement = 12, 
    RuleTypeIdentifier = 13, RuleTypeSpecification = 14, RuleSimpleType = 15, 
    RuleEnumeratedType = 16, RuleSubrange = 17, RuleFunctionDeclaration = 18, 
    RuleParamDeclaration = 19, RuleParamIdentifierList = 20, RuleStatement = 21, 
    RuleAssignment = 22, RuleWriteln = 23, RuleForStatement = 24, RuleCompoundStatement = 25, 
    RuleIfStatement = 26, RuleStatement_or_comment = 27, RuleStatement_without_semicolon = 28, 
    RuleAssignment_without_semicolon = 29, RuleVariable = 30, RuleFunctionCall = 31, 
    RuleArrayIndexing = 32, RuleExpression = 33, RuleSimpleExpression = 34, 
    RuleTerm = 35, RuleFactor = 36, RuleNumber = 37, RuleCharacterConstant = 38, 
    RuleStringConstant = 39
  };

  explicit ExprParser(antlr4::TokenStream *input);

  ExprParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExprParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class CommentContext;
  class ProgramDeclarationContext;
  class DeclarationContext;
  class ConstDeclarationContext;
  class ConstAssignmentListContext;
  class ConstExpressionContext;
  class VarDeclarationContext;
  class VarDeclarationListContext;
  class VarIdentifierListContext;
  class TypeDefDeclarationContext;
  class TypeDefListContext;
  class TypeDefElementContext;
  class TypeIdentifierContext;
  class TypeSpecificationContext;
  class SimpleTypeContext;
  class EnumeratedTypeContext;
  class SubrangeContext;
  class FunctionDeclarationContext;
  class ParamDeclarationContext;
  class ParamIdentifierListContext;
  class StatementContext;
  class AssignmentContext;
  class WritelnContext;
  class ForStatementContext;
  class CompoundStatementContext;
  class IfStatementContext;
  class Statement_or_commentContext;
  class Statement_without_semicolonContext;
  class Assignment_without_semicolonContext;
  class VariableContext;
  class FunctionCallContext;
  class ArrayIndexingContext;
  class ExpressionContext;
  class SimpleExpressionContext;
  class TermContext;
  class FactorContext;
  class NumberContext;
  class CharacterConstantContext;
  class StringConstantContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<ProgramDeclarationContext *> programDeclaration();
    ProgramDeclarationContext* programDeclaration(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  ProgramDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProgramDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramDeclarationContext* programDeclaration();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclarationContext *constDeclaration();
    VarDeclarationContext *varDeclaration();
    TypeDefDeclarationContext *typeDefDeclaration();
    FunctionDeclarationContext *functionDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ConstDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ConstAssignmentListContext *constAssignmentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDeclarationContext* constDeclaration();

  class  ConstAssignmentListContext : public antlr4::ParserRuleContext {
  public:
    ConstAssignmentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<ConstExpressionContext *> constExpression();
    ConstExpressionContext* constExpression(size_t i);
    std::vector<StringConstantContext *> stringConstant();
    StringConstantContext* stringConstant(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstAssignmentListContext* constAssignmentList();

  class  ConstExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstExpressionContext* constExpression();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    std::vector<VarDeclarationListContext *> varDeclarationList();
    VarDeclarationListContext* varDeclarationList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationContext* varDeclaration();

  class  VarDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarIdentifierListContext *varIdentifierList();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationListContext* varDeclarationList();

  class  VarIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    VarIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarIdentifierListContext* varIdentifierList();

  class  TypeDefDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeDefDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    TypeDefListContext *typeDefList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefDeclarationContext* typeDefDeclaration();

  class  TypeDefListContext : public antlr4::ParserRuleContext {
  public:
    TypeDefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeDefElementContext *> typeDefElement();
    TypeDefElementContext* typeDefElement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefListContext* typeDefList();

  class  TypeDefElementContext : public antlr4::ParserRuleContext {
  public:
    TypeDefElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *SEMICOLON();
    TypeSpecificationContext *typeSpecification();
    SimpleTypeContext *simpleType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefElementContext* typeDefElement();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  TypeSpecificationContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ARRAY();
    antlr4::tree::TerminalNode* ARRAY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACKET();
    antlr4::tree::TerminalNode* LBRACKET(size_t i);
    std::vector<SubrangeContext *> subrange();
    SubrangeContext* subrange(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACKET();
    antlr4::tree::TerminalNode* RBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *COMMA();
    SimpleTypeContext *simpleType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecificationContext* typeSpecification();

  class  SimpleTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    SubrangeContext *subrange();
    EnumeratedTypeContext *enumeratedType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeContext* simpleType();

  class  EnumeratedTypeContext : public antlr4::ParserRuleContext {
  public:
    EnumeratedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratedTypeContext* enumeratedType();

  class  SubrangeContext : public antlr4::ParserRuleContext {
  public:
    SubrangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RANGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubrangeContext* subrange();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<ParamDeclarationContext *> paramDeclaration();
    ParamDeclarationContext* paramDeclaration(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ParamDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamIdentifierListContext *paramIdentifierList();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDeclarationContext* paramDeclaration();

  class  ParamIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    ParamIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamIdentifierListContext* paramIdentifierList();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    WritelnContext *writeln();
    ForStatementContext *forStatement();
    CompoundStatementContext *compoundStatement();
    IfStatementContext *ifStatement();
    CommentContext *comment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    ArrayIndexingContext *arrayIndexing();
    VariableContext *variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  WritelnContext : public antlr4::ParserRuleContext {
  public:
    WritelnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITELN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnContext* writeln();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DO();
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<Statement_or_commentContext *> statement_or_comment();
    Statement_or_commentContext* statement_or_comment(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  Statement_or_commentContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_without_semicolonContext *statement_without_semicolon();
    StatementContext *statement();
    CommentContext *comment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_or_commentContext* statement_or_comment();

  class  Statement_without_semicolonContext : public antlr4::ParserRuleContext {
  public:
    Statement_without_semicolonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_without_semicolonContext *assignment_without_semicolon();
    WritelnContext *writeln();
    ForStatementContext *forStatement();
    CompoundStatementContext *compoundStatement();
    IfStatementContext *ifStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_without_semicolonContext* statement_without_semicolon();

  class  Assignment_without_semicolonContext : public antlr4::ParserRuleContext {
  public:
    Assignment_without_semicolonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    ArrayIndexingContext *arrayIndexing();
    VariableContext *variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_without_semicolonContext* assignment_without_semicolon();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  ArrayIndexingContext : public antlr4::ParserRuleContext {
  public:
    ArrayIndexingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *LBRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayIndexingContext* arrayIndexing();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NE();
    antlr4::tree::TerminalNode* NE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LTEQ();
    antlr4::tree::TerminalNode* LTEQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GTEQ();
    antlr4::tree::TerminalNode* GTEQ(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUSOP();
    antlr4::tree::TerminalNode* PLUSOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUSOP();
    antlr4::tree::TerminalNode* MINUSOP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTOP();
    antlr4::tree::TerminalNode* MULTOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVOP();
    antlr4::tree::TerminalNode* DIVOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    ArrayIndexingContext *arrayIndexing();
    NumberContext *number();
    CharacterConstantContext *characterConstant();
    StringConstantContext *stringConstant();
    FunctionCallContext *functionCall();
    VariableContext *variable();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  CharacterConstantContext : public antlr4::ParserRuleContext {
  public:
    CharacterConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterConstantContext* characterConstant();

  class  StringConstantContext : public antlr4::ParserRuleContext {
  public:
    StringConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringConstantContext* stringConstant();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

