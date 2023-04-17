
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
public:
  enum {
    COLON = 1, QUOTEMARK = 2, QMARK = 3, EXMARK = 4, NEWLINE = 5, WS = 6, 
    AND = 7, ARRAY = 8, ASM = 9, BEGIN = 10, BREAK = 11, CASE = 12, CONST = 13, 
    CONSTRUCTOR = 14, CONTINUE = 15, DESTRUCTOR = 16, DIV = 17, DO = 18, 
    DOWNTO = 19, ELSE = 20, END = 21, FALSE = 22, FILE = 23, FOR = 24, FUNCTION = 25, 
    GOTO = 26, IF = 27, IMPLEMENTATION = 28, IN = 29, INLINE = 30, INTERFACE = 31, 
    LABEL = 32, MOD = 33, NIL = 34, NOT = 35, OBJECT = 36, OF = 37, ON = 38, 
    OPERATOR = 39, OR = 40, PACKED = 41, PROCEDURE = 42, PROGRAM = 43, RECORD = 44, 
    REPEAT = 45, SET = 46, SHL = 47, SHR = 48, QUOTE = 49, CHARACTER = 50, 
    STRING = 51, THEN = 52, TO = 53, TRUE = 54, TYPE = 55, UNIT = 56, UNTIL = 57, 
    USES = 58, VAR = 59, WHILE = 60, WRITELN = 61, WITH = 62, XOR = 63, 
    INTEGER = 64, RANGE = 65, REAL = 66, IDENTIFIER = 67, PLUSOP = 68, MINUSOP = 69, 
    DIVOP = 70, MULTOP = 71, ASSIGN = 72, EQUAL = 73, NE = 74, LTEQ = 75, 
    GTEQ = 76, LT = 77, GT = 78, PLUSEQUAL = 79, MINUSEQUAL = 80, MULTEQUAL = 81, 
    DIVEQUAL = 82, CARAT = 83, SEMICOLON = 84, COMMA = 85, LPAREN = 86, 
    RPAREN = 87, LBRACKET = 88, RBRACKET = 89, LBRACE = 90, RBRACE = 91, 
    LCOMMENT = 92, RCOMMENT = 93
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

