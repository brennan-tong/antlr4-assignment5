
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
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

  explicit ExprLexer(antlr4::CharStream *input);

  ~ExprLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

