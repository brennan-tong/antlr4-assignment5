#include "ExprLexer.h"
#include "ExprParser.h"
#include "MyExprVisitor.h"
#include "SymbolTable.h"
#include <antlr4-runtime.h>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace antlr4;

struct MyToken {
  std::string text;
  int type;
};

std::string get_label(int);

/**
   1. Outputs Parse Tree
   2. Outputs Symbol Table and scoping level
   - Identifier name
   - Identifier kind 
   3. Each typedef 
   - scaler type
   - array: element type, element count, index type 
*/
int main() {
  std::string inputFileName = "test-in.txt";
  std::ifstream inputFile(inputFileName);

  if (!inputFile) {
    std::cerr << "Could not open the input file." << std::endl;
    return 2;
  }

  ANTLRInputStream input(inputFile);
  ExprLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  ExprParser parser(&tokens);

  tree::ParseTree *tree = parser.prog();
  MyExprVisitor visitor;
  visitor.visit(tree);

  // Output parse tree
  std::ofstream parseTreeOutput("test-out.txt");
  parseTreeOutput << tree->toStringTree(&parser) << std::endl;
  parseTreeOutput.close();

  // Output symbol tables and type definitions
  visitor.printSymbolTables();
}

std::string get_label(int x) {
  std::string temp;

  switch (x) {
  case 1:
    temp = "PERIOD";
    break;
  case 2:
    temp = "COLON";
    break;
  case 3:
    temp = "QMARK";
    break;
  case 4:
    temp = "EXMARK";
    break;
  case 5:
    temp = "NEWLINE";
    break;
  case 6:
    temp = "WS";
    break;
  case 7:
    temp = "AND";
    break;
  case 8:
    temp = "ARRAY";
    break;
  case 9:
    temp = "ASM";
    break;
  case 10:
    temp = "BEGIN";
    break;
  case 11:
    temp = "BREAK";
    break;
  case 12:
    temp = "CASE";
    break;
  case 13:
    temp = "CONST";
    break;
  case 14:
    temp = "CONSTRUCTOR";
    break;
  case 15:
    temp = "CONTINUE";
    break;
  case 16:
    temp = "DESTRUCTOR";
    break;
  case 17:
    temp = "DIV";
    break;
  case 18:
    temp = "DO";
    break;
  case 19:
    temp = "DOWNTO";
    break;
  case 20:
    temp = "ELSE";
    break;
  case 21:
    temp = "END";
    break;
  case 22:
    temp = "FALSE";
    break;
  case 23:
    temp = "FILE";
    break;
  case 24:
    temp = "FOR";
    break;
  case 25:
    temp = "FUNCTION";
    break;
  case 26:
    temp = "GOTO";
    break;
  case 27:
    temp = "IF";
    break;
  case 28:
    temp = "IMPLEMENTATION";
    break;
  case 29:
    temp = "IN";
    break;
  case 30:
    temp = "INLINE";
    break;
  case 31:
    temp = "INTERFACE";
    break;
  case 32:
    temp = "LABEL";
    break;
  case 33:
    temp = "MOD";
    break;
  case 34:
    temp = "NIL";
    break;
  case 35:
    temp = "NOT";
    break;
  case 36:
    temp = "OF";
    break;
  case 37:
    temp = "OF";
    break;
  case 38:
    temp = "ON";
    break;
  case 39:
    temp = "OPERATOR";
    break;
  case 40:
    temp = "OR";
    break;
  case 41:
    temp = "PACKED";
    break;
  case 42:
    temp = "PROCEDURE";
    break;
  case 43:
    temp = "PROGRAM";
  case 44:
    temp = "PROGRAM";
    break;
  case 45:
    temp = "REPEAT";
    break;
  case 46:
    temp = "SET";
    break;
  case 47:
    temp = "SHL";
    break;
  case 48:
    temp = "SHR";
    break;
  case 49:
    temp = "QUOTE";
    break;
  case 50:
    temp = "CHARACTER";
    break;
  case 51:
    temp = "STRING";
    break;
  case 52:
    temp = "THEN";
    break;
  case 53:
    temp = "TO";
    break;
  case 54:
    temp = "TRUE";
    break;
  case 55:
    temp = "TYPE";
    break;
  case 56:
    temp = "UNIT";
    break;
  case 57:
    temp = "UNTIL";
    break;
  case 58:
    temp = "USES";
    break;
  case 59:
    temp = "VAR";
    break;
  case 60:
    temp = "WHILE";
    break;
  case 61:
    temp = "WITH";
    break;
  case 62:
    temp = "XOR";
    break;
  case 63:
    temp = "INTEGER";
    break;
  case 64:
    temp = "REAL";
    break;
  case 65:
    temp = "IDENTIFIER";
    break;
  case 66:
    temp = "PLUSOP";
    break;
  case 67:
    temp = "MINUSOP";
    break;
  case 68:
    temp = "DIVOP";
    break;
  case 69:
    temp = "MULTOP";
    break;
  case 70:
    temp = "ASSIGN";
    break;
  case 71:
    temp = "EQUAL";
    break;
  case 72:
    temp = "NE";
    break;
  case 73:
    temp = "LTEQ";
    break;
  case 74:
    temp = "GTEQ";
    break;
  case 75:
    temp = "LT";
    break;
  case 76:
    temp = "GT";
    break;
  case 77:
    temp = "PLUSEQUAL";
    break;
  case 78:
    temp = "MINUSEQUAL";
    break;
  case 79:
    temp = "MULTEQUAL";
    break;
  case 80:
    temp = "DIVEQUAL";
    break;
  case 81:
    temp = "CARAT";
    break;
  case 82:
    temp = "SEMICOLON";
    break;
  case 83:
    temp = "COMMA";
    break;
  case 84:
    temp = "LPAREN";
    break;
  case 85:
    temp = "RPAREN";
    break;
  case 86:
    temp = "LBRACKET";
    break;
  case 87:
    temp = "RBRACKET";
    break;
  case 88:
    temp = "LBRACE";
    break;
  case 89:
    temp = "RBRACE";
    break;
  case 90:
    temp = "LCOMMENT";
    break;
  case 91:
    temp = "RCOMMENT";
    break;
  case 92:
    temp = "WRITE";
    break;
  case 93:
    temp = "WRITELN";
    break;
  default:
    temp = "";
  }
  return temp;
}
