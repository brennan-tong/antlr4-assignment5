
// Generated from Expr.g4 by ANTLR 4.12.0


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
  assert(exprParserStaticData == nullptr);
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "prog", "comment", "programDeclaration", "declaration", "constDeclaration", 
      "constExpression", "varDeclaration", "varDeclarationList", "varIdentifierList", 
      "typeDefDeclaration", "typeDefList", "typeDefElement", "typeIdentifier", 
      "typeSpecification", "simpleType", "colorList", "fieldList", "subrange", 
      "functionDeclaration", "paramDeclaration", "statement", "assignment", 
      "writeln", "forStatement", "compoundStatement", "variable", "arrayIndexing", 
      "expression", "simpleExpression", "term", "factor", "number", "characterConstant", 
      "stringConstant"
    },
    std::vector<std::string>{
      "", "':'", "'\"'", "'\\u003F'", "'!'", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "'''", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "'..'", "", "", "'+'", "'-'", "'/'", "'*'", "':='", "'='", 
      "'<>'", "'<='", "'>='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", 
      "'^'", "';'", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", "'(*'", 
      "'*)'"
    },
    std::vector<std::string>{
      "", "COLON", "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", "WS", "AND", 
      "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
      "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
      "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
      "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
      "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", 
      "SHL", "SHR", "QUOTE", "CHARACTER", "STRING", "THEN", "TO", "TRUE", 
      "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WRITELN", "WITH", 
      "XOR", "INTEGER", "RANGE", "REAL", "IDENTIFIER", "PLUSOP", "MINUSOP", 
      "DIVOP", "MULTOP", "ASSIGN", "EQUAL", "NE", "LTEQ", "GTEQ", "LT", 
      "GT", "PLUSEQUAL", "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "CARAT", 
      "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", 
      "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,93,380,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,0,1,0,
  	5,0,73,8,0,10,0,12,0,76,9,0,1,0,1,0,1,1,1,1,5,1,82,8,1,10,1,12,1,85,9,
  	1,1,1,3,1,88,8,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,96,8,2,10,2,12,2,99,9,2,
  	3,2,101,8,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,110,8,3,1,4,1,4,1,4,1,4,1,
  	4,1,4,5,4,118,8,4,10,4,12,4,121,9,4,1,5,1,5,1,5,3,5,126,8,5,1,5,3,5,129,
  	8,5,1,6,1,6,4,6,133,8,6,11,6,12,6,134,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,
  	5,8,145,8,8,10,8,12,8,148,9,8,1,9,1,9,1,9,1,10,4,10,154,8,10,11,10,12,
  	10,155,1,11,1,11,1,11,1,11,3,11,162,8,11,1,11,1,11,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,209,8,13,
  	1,14,1,14,3,14,213,8,14,1,15,1,15,1,15,5,15,218,8,15,10,15,12,15,221,
  	9,15,1,16,1,16,1,16,5,16,226,8,16,10,16,12,16,229,9,16,1,16,1,16,1,16,
  	1,16,4,16,235,8,16,11,16,12,16,236,1,17,1,17,1,17,1,17,1,18,1,18,1,18,
  	1,18,1,18,1,18,5,18,249,8,18,10,18,12,18,252,9,18,3,18,254,8,18,1,18,
  	1,18,1,18,1,18,1,18,5,18,261,8,18,10,18,12,18,264,9,18,1,18,1,18,5,18,
  	268,8,18,10,18,12,18,271,9,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,
  	1,20,1,20,1,20,3,20,284,8,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,
  	1,22,1,22,5,22,296,8,22,10,22,12,22,299,9,22,3,22,301,8,22,1,22,1,22,
  	1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,5,24,317,
  	8,24,10,24,12,24,320,9,24,1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,3,26,335,8,26,1,27,1,27,1,27,5,27,340,8,27,10,27,
  	12,27,343,9,27,1,28,1,28,1,28,5,28,348,8,28,10,28,12,28,351,9,28,1,29,
  	1,29,1,29,5,29,356,8,29,10,29,12,29,359,9,29,1,30,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,3,30,372,8,30,1,31,1,31,1,32,1,32,1,33,
  	1,33,1,33,1,74,0,34,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,0,4,1,0,73,78,1,0,68,
  	69,2,0,33,33,70,71,2,0,64,64,66,66,391,0,74,1,0,0,0,2,79,1,0,0,0,4,89,
  	1,0,0,0,6,109,1,0,0,0,8,111,1,0,0,0,10,128,1,0,0,0,12,130,1,0,0,0,14,
  	136,1,0,0,0,16,141,1,0,0,0,18,149,1,0,0,0,20,153,1,0,0,0,22,157,1,0,0,
  	0,24,165,1,0,0,0,26,208,1,0,0,0,28,212,1,0,0,0,30,214,1,0,0,0,32,234,
  	1,0,0,0,34,238,1,0,0,0,36,242,1,0,0,0,38,275,1,0,0,0,40,283,1,0,0,0,42,
  	285,1,0,0,0,44,290,1,0,0,0,46,305,1,0,0,0,48,314,1,0,0,0,50,324,1,0,0,
  	0,52,326,1,0,0,0,54,336,1,0,0,0,56,344,1,0,0,0,58,352,1,0,0,0,60,371,
  	1,0,0,0,62,373,1,0,0,0,64,375,1,0,0,0,66,377,1,0,0,0,68,73,3,6,3,0,69,
  	73,3,4,2,0,70,73,3,40,20,0,71,73,3,2,1,0,72,68,1,0,0,0,72,69,1,0,0,0,
  	72,70,1,0,0,0,72,71,1,0,0,0,73,76,1,0,0,0,74,75,1,0,0,0,74,72,1,0,0,0,
  	75,77,1,0,0,0,76,74,1,0,0,0,77,78,5,0,0,1,78,1,1,0,0,0,79,83,5,92,0,0,
  	80,82,9,0,0,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,
  	84,87,1,0,0,0,85,83,1,0,0,0,86,88,5,93,0,0,87,86,1,0,0,0,87,88,1,0,0,
  	0,88,3,1,0,0,0,89,90,5,43,0,0,90,91,5,67,0,0,91,100,5,86,0,0,92,97,5,
  	67,0,0,93,94,5,85,0,0,94,96,5,67,0,0,95,93,1,0,0,0,96,99,1,0,0,0,97,95,
  	1,0,0,0,97,98,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,100,92,1,0,0,0,100,
  	101,1,0,0,0,101,102,1,0,0,0,102,103,5,87,0,0,103,104,5,84,0,0,104,5,1,
  	0,0,0,105,110,3,8,4,0,106,110,3,12,6,0,107,110,3,18,9,0,108,110,3,36,
  	18,0,109,105,1,0,0,0,109,106,1,0,0,0,109,107,1,0,0,0,109,108,1,0,0,0,
  	110,7,1,0,0,0,111,119,5,13,0,0,112,113,5,67,0,0,113,114,5,73,0,0,114,
  	115,3,10,5,0,115,116,5,84,0,0,116,118,1,0,0,0,117,112,1,0,0,0,118,121,
  	1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,9,1,0,0,0,121,119,1,0,0,0,
  	122,125,3,56,28,0,123,124,7,0,0,0,124,126,3,56,28,0,125,123,1,0,0,0,125,
  	126,1,0,0,0,126,129,1,0,0,0,127,129,3,66,33,0,128,122,1,0,0,0,128,127,
  	1,0,0,0,129,11,1,0,0,0,130,132,5,59,0,0,131,133,3,14,7,0,132,131,1,0,
  	0,0,133,134,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,13,1,0,0,0,136,
  	137,3,16,8,0,137,138,5,1,0,0,138,139,3,24,12,0,139,140,5,84,0,0,140,15,
  	1,0,0,0,141,146,5,67,0,0,142,143,5,85,0,0,143,145,5,67,0,0,144,142,1,
  	0,0,0,145,148,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,17,1,0,0,0,
  	148,146,1,0,0,0,149,150,5,55,0,0,150,151,3,20,10,0,151,19,1,0,0,0,152,
  	154,3,22,11,0,153,152,1,0,0,0,154,155,1,0,0,0,155,153,1,0,0,0,155,156,
  	1,0,0,0,156,21,1,0,0,0,157,158,5,67,0,0,158,161,5,73,0,0,159,162,3,26,
  	13,0,160,162,3,28,14,0,161,159,1,0,0,0,161,160,1,0,0,0,162,163,1,0,0,
  	0,163,164,5,84,0,0,164,23,1,0,0,0,165,166,5,67,0,0,166,25,1,0,0,0,167,
  	168,5,8,0,0,168,169,5,88,0,0,169,170,3,34,17,0,170,171,5,89,0,0,171,172,
  	5,37,0,0,172,173,3,24,12,0,173,209,1,0,0,0,174,175,5,8,0,0,175,176,5,
  	88,0,0,176,177,3,34,17,0,177,178,5,89,0,0,178,179,5,37,0,0,179,180,5,
  	8,0,0,180,181,5,88,0,0,181,182,3,34,17,0,182,183,5,89,0,0,183,184,5,37,
  	0,0,184,185,3,24,12,0,185,209,1,0,0,0,186,187,5,8,0,0,187,188,5,88,0,
  	0,188,189,3,34,17,0,189,190,5,89,0,0,190,191,5,37,0,0,191,192,5,8,0,0,
  	192,193,5,88,0,0,193,194,3,34,17,0,194,195,5,89,0,0,195,196,5,37,0,0,
  	196,197,5,8,0,0,197,198,5,88,0,0,198,199,3,34,17,0,199,200,5,89,0,0,200,
  	201,5,37,0,0,201,202,3,24,12,0,202,209,1,0,0,0,203,209,3,28,14,0,204,
  	205,5,44,0,0,205,206,3,32,16,0,206,207,5,21,0,0,207,209,1,0,0,0,208,167,
  	1,0,0,0,208,174,1,0,0,0,208,186,1,0,0,0,208,203,1,0,0,0,208,204,1,0,0,
  	0,209,27,1,0,0,0,210,213,5,67,0,0,211,213,3,34,17,0,212,210,1,0,0,0,212,
  	211,1,0,0,0,213,29,1,0,0,0,214,219,5,67,0,0,215,216,5,85,0,0,216,218,
  	5,67,0,0,217,215,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,
  	0,0,220,31,1,0,0,0,221,219,1,0,0,0,222,227,5,67,0,0,223,224,5,85,0,0,
  	224,226,5,67,0,0,225,223,1,0,0,0,226,229,1,0,0,0,227,225,1,0,0,0,227,
  	228,1,0,0,0,228,230,1,0,0,0,229,227,1,0,0,0,230,231,5,1,0,0,231,232,3,
  	24,12,0,232,233,5,84,0,0,233,235,1,0,0,0,234,222,1,0,0,0,235,236,1,0,
  	0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,33,1,0,0,0,238,239,3,54,27,0,
  	239,240,5,65,0,0,240,241,3,54,27,0,241,35,1,0,0,0,242,243,5,25,0,0,243,
  	244,5,67,0,0,244,253,5,86,0,0,245,250,3,38,19,0,246,247,5,85,0,0,247,
  	249,3,38,19,0,248,246,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,0,250,251,
  	1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,253,245,1,0,0,0,253,254,1,0,0,
  	0,254,255,1,0,0,0,255,256,5,87,0,0,256,257,5,1,0,0,257,258,3,24,12,0,
  	258,262,5,84,0,0,259,261,3,6,3,0,260,259,1,0,0,0,261,264,1,0,0,0,262,
  	260,1,0,0,0,262,263,1,0,0,0,263,265,1,0,0,0,264,262,1,0,0,0,265,269,5,
  	10,0,0,266,268,3,40,20,0,267,266,1,0,0,0,268,271,1,0,0,0,269,267,1,0,
  	0,0,269,270,1,0,0,0,270,272,1,0,0,0,271,269,1,0,0,0,272,273,5,21,0,0,
  	273,274,5,84,0,0,274,37,1,0,0,0,275,276,5,67,0,0,276,277,5,1,0,0,277,
  	278,3,24,12,0,278,39,1,0,0,0,279,284,3,42,21,0,280,284,3,44,22,0,281,
  	284,3,46,23,0,282,284,3,48,24,0,283,279,1,0,0,0,283,280,1,0,0,0,283,281,
  	1,0,0,0,283,282,1,0,0,0,284,41,1,0,0,0,285,286,3,50,25,0,286,287,5,72,
  	0,0,287,288,3,54,27,0,288,289,5,84,0,0,289,43,1,0,0,0,290,291,5,61,0,
  	0,291,300,5,86,0,0,292,297,3,54,27,0,293,294,5,85,0,0,294,296,3,54,27,
  	0,295,293,1,0,0,0,296,299,1,0,0,0,297,295,1,0,0,0,297,298,1,0,0,0,298,
  	301,1,0,0,0,299,297,1,0,0,0,300,292,1,0,0,0,300,301,1,0,0,0,301,302,1,
  	0,0,0,302,303,5,87,0,0,303,304,5,84,0,0,304,45,1,0,0,0,305,306,5,24,0,
  	0,306,307,5,67,0,0,307,308,5,72,0,0,308,309,3,54,27,0,309,310,5,53,0,
  	0,310,311,3,54,27,0,311,312,5,18,0,0,312,313,3,40,20,0,313,47,1,0,0,0,
  	314,318,5,10,0,0,315,317,3,40,20,0,316,315,1,0,0,0,317,320,1,0,0,0,318,
  	316,1,0,0,0,318,319,1,0,0,0,319,321,1,0,0,0,320,318,1,0,0,0,321,322,5,
  	21,0,0,322,323,5,84,0,0,323,49,1,0,0,0,324,325,5,67,0,0,325,51,1,0,0,
  	0,326,327,3,50,25,0,327,328,5,88,0,0,328,329,3,54,27,0,329,334,5,89,0,
  	0,330,331,5,88,0,0,331,332,3,54,27,0,332,333,5,89,0,0,333,335,1,0,0,0,
  	334,330,1,0,0,0,334,335,1,0,0,0,335,53,1,0,0,0,336,341,3,56,28,0,337,
  	338,7,0,0,0,338,340,3,56,28,0,339,337,1,0,0,0,340,343,1,0,0,0,341,339,
  	1,0,0,0,341,342,1,0,0,0,342,55,1,0,0,0,343,341,1,0,0,0,344,349,3,58,29,
  	0,345,346,7,1,0,0,346,348,3,58,29,0,347,345,1,0,0,0,348,351,1,0,0,0,349,
  	347,1,0,0,0,349,350,1,0,0,0,350,57,1,0,0,0,351,349,1,0,0,0,352,357,3,
  	60,30,0,353,354,7,2,0,0,354,356,3,60,30,0,355,353,1,0,0,0,356,359,1,0,
  	0,0,357,355,1,0,0,0,357,358,1,0,0,0,358,59,1,0,0,0,359,357,1,0,0,0,360,
  	361,5,35,0,0,361,372,3,60,30,0,362,363,5,86,0,0,363,364,3,54,27,0,364,
  	365,5,87,0,0,365,372,1,0,0,0,366,372,3,52,26,0,367,372,3,62,31,0,368,
  	372,3,64,32,0,369,372,3,66,33,0,370,372,3,50,25,0,371,360,1,0,0,0,371,
  	362,1,0,0,0,371,366,1,0,0,0,371,367,1,0,0,0,371,368,1,0,0,0,371,369,1,
  	0,0,0,371,370,1,0,0,0,372,61,1,0,0,0,373,374,7,3,0,0,374,63,1,0,0,0,375,
  	376,5,50,0,0,376,65,1,0,0,0,377,378,5,51,0,0,378,67,1,0,0,0,32,72,74,
  	83,87,97,100,109,119,125,128,134,146,155,161,208,212,219,227,236,250,
  	253,262,269,283,297,300,318,334,341,349,357,371
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::ProgContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::ProgContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}

std::vector<ExprParser::ProgramDeclarationContext *> ExprParser::ProgContext::programDeclaration() {
  return getRuleContexts<ExprParser::ProgramDeclarationContext>();
}

ExprParser::ProgramDeclarationContext* ExprParser::ProgContext::programDeclaration(size_t i) {
  return getRuleContext<ExprParser::ProgramDeclarationContext>(i);
}

std::vector<ExprParser::StatementContext *> ExprParser::ProgContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::ProgContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

std::vector<ExprParser::CommentContext *> ExprParser::ProgContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::ProgContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}


std::any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(74);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(72);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ExprParser::CONST:
          case ExprParser::FUNCTION:
          case ExprParser::TYPE:
          case ExprParser::VAR: {
            setState(68);
            declaration();
            break;
          }

          case ExprParser::PROGRAM: {
            setState(69);
            programDeclaration();
            break;
          }

          case ExprParser::BEGIN:
          case ExprParser::FOR:
          case ExprParser::WRITELN:
          case ExprParser::IDENTIFIER: {
            setState(70);
            statement();
            break;
          }

          case ExprParser::LCOMMENT: {
            setState(71);
            comment();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(76);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(77);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

ExprParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CommentContext::LCOMMENT() {
  return getToken(ExprParser::LCOMMENT, 0);
}

tree::TerminalNode* ExprParser::CommentContext::RCOMMENT() {
  return getToken(ExprParser::RCOMMENT, 0);
}


size_t ExprParser::CommentContext::getRuleIndex() const {
  return ExprParser::RuleComment;
}


std::any ExprParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CommentContext* ExprParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleComment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(ExprParser::LCOMMENT);
    setState(83);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(80);
        matchWildcard(); 
      }
      setState(85);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(87);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::RCOMMENT) {
      setState(86);
      match(ExprParser::RCOMMENT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramDeclarationContext ------------------------------------------------------------------

ExprParser::ProgramDeclarationContext::ProgramDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::PROGRAM() {
  return getToken(ExprParser::PROGRAM, 0);
}

std::vector<tree::TerminalNode *> ExprParser::ProgramDeclarationContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> ExprParser::ProgramDeclarationContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::ProgramDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleProgramDeclaration;
}


std::any ExprParser::ProgramDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgramDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgramDeclarationContext* ExprParser::programDeclaration() {
  ProgramDeclarationContext *_localctx = _tracker.createInstance<ProgramDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleProgramDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(ExprParser::PROGRAM);
    setState(90);
    match(ExprParser::IDENTIFIER);
    setState(91);
    match(ExprParser::LPAREN);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::IDENTIFIER) {
      setState(92);
      match(ExprParser::IDENTIFIER);
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(93);
        match(ExprParser::COMMA);
        setState(94);
        match(ExprParser::IDENTIFIER);
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(102);
    match(ExprParser::RPAREN);
    setState(103);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ExprParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ConstDeclarationContext* ExprParser::DeclarationContext::constDeclaration() {
  return getRuleContext<ExprParser::ConstDeclarationContext>(0);
}

ExprParser::VarDeclarationContext* ExprParser::DeclarationContext::varDeclaration() {
  return getRuleContext<ExprParser::VarDeclarationContext>(0);
}

ExprParser::TypeDefDeclarationContext* ExprParser::DeclarationContext::typeDefDeclaration() {
  return getRuleContext<ExprParser::TypeDefDeclarationContext>(0);
}

ExprParser::FunctionDeclarationContext* ExprParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<ExprParser::FunctionDeclarationContext>(0);
}


size_t ExprParser::DeclarationContext::getRuleIndex() const {
  return ExprParser::RuleDeclaration;
}


std::any ExprParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DeclarationContext* ExprParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(105);
        constDeclaration();
        break;
      }

      case ExprParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(106);
        varDeclaration();
        break;
      }

      case ExprParser::TYPE: {
        enterOuterAlt(_localctx, 3);
        setState(107);
        typeDefDeclaration();
        break;
      }

      case ExprParser::FUNCTION: {
        enterOuterAlt(_localctx, 4);
        setState(108);
        functionDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

ExprParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::CONST() {
  return getToken(ExprParser::CONST, 0);
}

std::vector<tree::TerminalNode *> ExprParser::ConstDeclarationContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::ConstDeclarationContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<ExprParser::ConstExpressionContext *> ExprParser::ConstDeclarationContext::constExpression() {
  return getRuleContexts<ExprParser::ConstExpressionContext>();
}

ExprParser::ConstExpressionContext* ExprParser::ConstDeclarationContext::constExpression(size_t i) {
  return getRuleContext<ExprParser::ConstExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ConstDeclarationContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}


size_t ExprParser::ConstDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleConstDeclaration;
}


std::any ExprParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstDeclarationContext* ExprParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleConstDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(ExprParser::CONST);
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(112);
        match(ExprParser::IDENTIFIER);
        setState(113);
        match(ExprParser::EQUAL);
        setState(114);
        constExpression();
        setState(115);
        match(ExprParser::SEMICOLON); 
      }
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpressionContext ------------------------------------------------------------------

ExprParser::ConstExpressionContext::ConstExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::SimpleExpressionContext *> ExprParser::ConstExpressionContext::simpleExpression() {
  return getRuleContexts<ExprParser::SimpleExpressionContext>();
}

ExprParser::SimpleExpressionContext* ExprParser::ConstExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<ExprParser::SimpleExpressionContext>(i);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::NE() {
  return getToken(ExprParser::NE, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::LTEQ() {
  return getToken(ExprParser::LTEQ, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::GTEQ() {
  return getToken(ExprParser::GTEQ, 0);
}

ExprParser::StringConstantContext* ExprParser::ConstExpressionContext::stringConstant() {
  return getRuleContext<ExprParser::StringConstantContext>(0);
}


size_t ExprParser::ConstExpressionContext::getRuleIndex() const {
  return ExprParser::RuleConstExpression;
}


std::any ExprParser::ConstExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstExpressionContext* ExprParser::constExpression() {
  ConstExpressionContext *_localctx = _tracker.createInstance<ConstExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleConstExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      simpleExpression();
      setState(125);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & 63) != 0)) {
        setState(123);
        _la = _input->LA(1);
        if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 73)) & 63) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(124);
        simpleExpression();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(127);
      stringConstant();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

ExprParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VarDeclarationContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

std::vector<ExprParser::VarDeclarationListContext *> ExprParser::VarDeclarationContext::varDeclarationList() {
  return getRuleContexts<ExprParser::VarDeclarationListContext>();
}

ExprParser::VarDeclarationListContext* ExprParser::VarDeclarationContext::varDeclarationList(size_t i) {
  return getRuleContext<ExprParser::VarDeclarationListContext>(i);
}


size_t ExprParser::VarDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleVarDeclaration;
}


std::any ExprParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarDeclarationContext* ExprParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleVarDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(ExprParser::VAR);
    setState(132); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(131);
              varDeclarationList();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(134); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationListContext ------------------------------------------------------------------

ExprParser::VarDeclarationListContext::VarDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VarIdentifierListContext* ExprParser::VarDeclarationListContext::varIdentifierList() {
  return getRuleContext<ExprParser::VarIdentifierListContext>(0);
}

tree::TerminalNode* ExprParser::VarDeclarationListContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::VarDeclarationListContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* ExprParser::VarDeclarationListContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::VarDeclarationListContext::getRuleIndex() const {
  return ExprParser::RuleVarDeclarationList;
}


std::any ExprParser::VarDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarDeclarationListContext* ExprParser::varDeclarationList() {
  VarDeclarationListContext *_localctx = _tracker.createInstance<VarDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleVarDeclarationList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    varIdentifierList();
    setState(137);
    match(ExprParser::COLON);
    setState(138);
    typeIdentifier();
    setState(139);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarIdentifierListContext ------------------------------------------------------------------

ExprParser::VarIdentifierListContext::VarIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::VarIdentifierListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::VarIdentifierListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::VarIdentifierListContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::VarIdentifierListContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::VarIdentifierListContext::getRuleIndex() const {
  return ExprParser::RuleVarIdentifierList;
}


std::any ExprParser::VarIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarIdentifierListContext* ExprParser::varIdentifierList() {
  VarIdentifierListContext *_localctx = _tracker.createInstance<VarIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleVarIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(ExprParser::IDENTIFIER);
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(142);
      match(ExprParser::COMMA);
      setState(143);
      match(ExprParser::IDENTIFIER);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefDeclarationContext ------------------------------------------------------------------

ExprParser::TypeDefDeclarationContext::TypeDefDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeDefDeclarationContext::TYPE() {
  return getToken(ExprParser::TYPE, 0);
}

ExprParser::TypeDefListContext* ExprParser::TypeDefDeclarationContext::typeDefList() {
  return getRuleContext<ExprParser::TypeDefListContext>(0);
}


size_t ExprParser::TypeDefDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleTypeDefDeclaration;
}


std::any ExprParser::TypeDefDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeDefDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeDefDeclarationContext* ExprParser::typeDefDeclaration() {
  TypeDefDeclarationContext *_localctx = _tracker.createInstance<TypeDefDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleTypeDefDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(ExprParser::TYPE);
    setState(150);
    typeDefList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefListContext ------------------------------------------------------------------

ExprParser::TypeDefListContext::TypeDefListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::TypeDefElementContext *> ExprParser::TypeDefListContext::typeDefElement() {
  return getRuleContexts<ExprParser::TypeDefElementContext>();
}

ExprParser::TypeDefElementContext* ExprParser::TypeDefListContext::typeDefElement(size_t i) {
  return getRuleContext<ExprParser::TypeDefElementContext>(i);
}


size_t ExprParser::TypeDefListContext::getRuleIndex() const {
  return ExprParser::RuleTypeDefList;
}


std::any ExprParser::TypeDefListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeDefList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeDefListContext* ExprParser::typeDefList() {
  TypeDefListContext *_localctx = _tracker.createInstance<TypeDefListContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleTypeDefList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(153); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(152);
              typeDefElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(155); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefElementContext ------------------------------------------------------------------

ExprParser::TypeDefElementContext::TypeDefElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeDefElementContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::TypeDefElementContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::TypeDefElementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::TypeSpecificationContext* ExprParser::TypeDefElementContext::typeSpecification() {
  return getRuleContext<ExprParser::TypeSpecificationContext>(0);
}

ExprParser::SimpleTypeContext* ExprParser::TypeDefElementContext::simpleType() {
  return getRuleContext<ExprParser::SimpleTypeContext>(0);
}


size_t ExprParser::TypeDefElementContext::getRuleIndex() const {
  return ExprParser::RuleTypeDefElement;
}


std::any ExprParser::TypeDefElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeDefElement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeDefElementContext* ExprParser::typeDefElement() {
  TypeDefElementContext *_localctx = _tracker.createInstance<TypeDefElementContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleTypeDefElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(ExprParser::IDENTIFIER);
    setState(158);
    match(ExprParser::EQUAL);
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(159);
      typeSpecification();
      break;
    }

    case 2: {
      setState(160);
      simpleType();
      break;
    }

    default:
      break;
    }
    setState(163);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

ExprParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeIdentifierContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::TypeIdentifierContext::getRuleIndex() const {
  return ExprParser::RuleTypeIdentifier;
}


std::any ExprParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeIdentifierContext* ExprParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecificationContext ------------------------------------------------------------------

ExprParser::TypeSpecificationContext::TypeSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::ARRAY() {
  return getTokens(ExprParser::ARRAY);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::ARRAY(size_t i) {
  return getToken(ExprParser::ARRAY, i);
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::LBRACKET() {
  return getTokens(ExprParser::LBRACKET);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::LBRACKET(size_t i) {
  return getToken(ExprParser::LBRACKET, i);
}

std::vector<ExprParser::SubrangeContext *> ExprParser::TypeSpecificationContext::subrange() {
  return getRuleContexts<ExprParser::SubrangeContext>();
}

ExprParser::SubrangeContext* ExprParser::TypeSpecificationContext::subrange(size_t i) {
  return getRuleContext<ExprParser::SubrangeContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::RBRACKET() {
  return getTokens(ExprParser::RBRACKET);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::RBRACKET(size_t i) {
  return getToken(ExprParser::RBRACKET, i);
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::OF() {
  return getTokens(ExprParser::OF);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::OF(size_t i) {
  return getToken(ExprParser::OF, i);
}

ExprParser::TypeIdentifierContext* ExprParser::TypeSpecificationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

ExprParser::SimpleTypeContext* ExprParser::TypeSpecificationContext::simpleType() {
  return getRuleContext<ExprParser::SimpleTypeContext>(0);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::RECORD() {
  return getToken(ExprParser::RECORD, 0);
}

ExprParser::FieldListContext* ExprParser::TypeSpecificationContext::fieldList() {
  return getRuleContext<ExprParser::FieldListContext>(0);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::END() {
  return getToken(ExprParser::END, 0);
}


size_t ExprParser::TypeSpecificationContext::getRuleIndex() const {
  return ExprParser::RuleTypeSpecification;
}


std::any ExprParser::TypeSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeSpecification(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeSpecificationContext* ExprParser::typeSpecification() {
  TypeSpecificationContext *_localctx = _tracker.createInstance<TypeSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleTypeSpecification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      match(ExprParser::ARRAY);
      setState(168);
      match(ExprParser::LBRACKET);
      setState(169);
      subrange();
      setState(170);
      match(ExprParser::RBRACKET);
      setState(171);
      match(ExprParser::OF);
      setState(172);
      typeIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(174);
      match(ExprParser::ARRAY);
      setState(175);
      match(ExprParser::LBRACKET);
      setState(176);
      subrange();
      setState(177);
      match(ExprParser::RBRACKET);
      setState(178);
      match(ExprParser::OF);
      setState(179);
      match(ExprParser::ARRAY);
      setState(180);
      match(ExprParser::LBRACKET);
      setState(181);
      subrange();
      setState(182);
      match(ExprParser::RBRACKET);
      setState(183);
      match(ExprParser::OF);
      setState(184);
      typeIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(186);
      match(ExprParser::ARRAY);
      setState(187);
      match(ExprParser::LBRACKET);
      setState(188);
      subrange();
      setState(189);
      match(ExprParser::RBRACKET);
      setState(190);
      match(ExprParser::OF);
      setState(191);
      match(ExprParser::ARRAY);
      setState(192);
      match(ExprParser::LBRACKET);
      setState(193);
      subrange();
      setState(194);
      match(ExprParser::RBRACKET);
      setState(195);
      match(ExprParser::OF);
      setState(196);
      match(ExprParser::ARRAY);
      setState(197);
      match(ExprParser::LBRACKET);
      setState(198);
      subrange();
      setState(199);
      match(ExprParser::RBRACKET);
      setState(200);
      match(ExprParser::OF);
      setState(201);
      typeIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(203);
      simpleType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(204);
      match(ExprParser::RECORD);
      setState(205);
      fieldList();
      setState(206);
      match(ExprParser::END);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeContext ------------------------------------------------------------------

ExprParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SimpleTypeContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::SubrangeContext* ExprParser::SimpleTypeContext::subrange() {
  return getRuleContext<ExprParser::SubrangeContext>(0);
}


size_t ExprParser::SimpleTypeContext::getRuleIndex() const {
  return ExprParser::RuleSimpleType;
}


std::any ExprParser::SimpleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSimpleType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SimpleTypeContext* ExprParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(210);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(211);
      subrange();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColorListContext ------------------------------------------------------------------

ExprParser::ColorListContext::ColorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::ColorListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ColorListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::ColorListContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::ColorListContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::ColorListContext::getRuleIndex() const {
  return ExprParser::RuleColorList;
}


std::any ExprParser::ColorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitColorList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ColorListContext* ExprParser::colorList() {
  ColorListContext *_localctx = _tracker.createInstance<ColorListContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleColorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(ExprParser::IDENTIFIER);
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(215);
      match(ExprParser::COMMA);
      setState(216);
      match(ExprParser::IDENTIFIER);
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldListContext ------------------------------------------------------------------

ExprParser::FieldListContext::FieldListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::FieldListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::FieldListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::FieldListContext::COLON() {
  return getTokens(ExprParser::COLON);
}

tree::TerminalNode* ExprParser::FieldListContext::COLON(size_t i) {
  return getToken(ExprParser::COLON, i);
}

std::vector<ExprParser::TypeIdentifierContext *> ExprParser::FieldListContext::typeIdentifier() {
  return getRuleContexts<ExprParser::TypeIdentifierContext>();
}

ExprParser::TypeIdentifierContext* ExprParser::FieldListContext::typeIdentifier(size_t i) {
  return getRuleContext<ExprParser::TypeIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::FieldListContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::FieldListContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}

std::vector<tree::TerminalNode *> ExprParser::FieldListContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::FieldListContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::FieldListContext::getRuleIndex() const {
  return ExprParser::RuleFieldList;
}


std::any ExprParser::FieldListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFieldList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FieldListContext* ExprParser::fieldList() {
  FieldListContext *_localctx = _tracker.createInstance<FieldListContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleFieldList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(222);
      match(ExprParser::IDENTIFIER);
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(223);
        match(ExprParser::COMMA);
        setState(224);
        match(ExprParser::IDENTIFIER);
        setState(229);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(230);
      match(ExprParser::COLON);
      setState(231);
      typeIdentifier();
      setState(232);
      match(ExprParser::SEMICOLON);
      setState(236); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrangeContext ------------------------------------------------------------------

ExprParser::SubrangeContext::SubrangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExpressionContext *> ExprParser::SubrangeContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::SubrangeContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::SubrangeContext::RANGE() {
  return getToken(ExprParser::RANGE, 0);
}


size_t ExprParser::SubrangeContext::getRuleIndex() const {
  return ExprParser::RuleSubrange;
}


std::any ExprParser::SubrangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSubrange(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SubrangeContext* ExprParser::subrange() {
  SubrangeContext *_localctx = _tracker.createInstance<SubrangeContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleSubrange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    expression();
    setState(239);
    match(ExprParser::RANGE);
    setState(240);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

ExprParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(ExprParser::FUNCTION, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::FunctionDeclarationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::FunctionDeclarationContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::END() {
  return getToken(ExprParser::END, 0);
}

std::vector<ExprParser::ParamDeclarationContext *> ExprParser::FunctionDeclarationContext::paramDeclaration() {
  return getRuleContexts<ExprParser::ParamDeclarationContext>();
}

ExprParser::ParamDeclarationContext* ExprParser::FunctionDeclarationContext::paramDeclaration(size_t i) {
  return getRuleContext<ExprParser::ParamDeclarationContext>(i);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::FunctionDeclarationContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::FunctionDeclarationContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}

std::vector<ExprParser::StatementContext *> ExprParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::FunctionDeclarationContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::FunctionDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleFunctionDeclaration;
}


std::any ExprParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FunctionDeclarationContext* ExprParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(ExprParser::FUNCTION);
    setState(243);
    match(ExprParser::IDENTIFIER);
    setState(244);
    match(ExprParser::LPAREN);
    setState(253);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::IDENTIFIER) {
      setState(245);
      paramDeclaration();
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(246);
        match(ExprParser::COMMA);
        setState(247);
        paramDeclaration();
        setState(252);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(255);
    match(ExprParser::RPAREN);
    setState(256);
    match(ExprParser::COLON);
    setState(257);
    typeIdentifier();
    setState(258);
    match(ExprParser::SEMICOLON);
    setState(262);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 612489549355950080) != 0)) {
      setState(259);
      declaration();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(265);
    match(ExprParser::BEGIN);
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & 146366987889557505) != 0)) {
      setState(266);
      statement();
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
    match(ExprParser::END);
    setState(273);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDeclarationContext ------------------------------------------------------------------

ExprParser::ParamDeclarationContext::ParamDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ParamDeclarationContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::ParamDeclarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::ParamDeclarationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}


size_t ExprParser::ParamDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleParamDeclaration;
}


std::any ExprParser::ParamDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParamDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ParamDeclarationContext* ExprParser::paramDeclaration() {
  ParamDeclarationContext *_localctx = _tracker.createInstance<ParamDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleParamDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(ExprParser::IDENTIFIER);
    setState(276);
    match(ExprParser::COLON);
    setState(277);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::AssignmentContext* ExprParser::StatementContext::assignment() {
  return getRuleContext<ExprParser::AssignmentContext>(0);
}

ExprParser::WritelnContext* ExprParser::StatementContext::writeln() {
  return getRuleContext<ExprParser::WritelnContext>(0);
}

ExprParser::ForStatementContext* ExprParser::StatementContext::forStatement() {
  return getRuleContext<ExprParser::ForStatementContext>(0);
}

ExprParser::CompoundStatementContext* ExprParser::StatementContext::compoundStatement() {
  return getRuleContext<ExprParser::CompoundStatementContext>(0);
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}


std::any ExprParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(279);
        assignment();
        break;
      }

      case ExprParser::WRITELN: {
        enterOuterAlt(_localctx, 2);
        setState(280);
        writeln();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(281);
        forStatement();
        break;
      }

      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 4);
        setState(282);
        compoundStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ExprParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::AssignmentContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::AssignmentContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExpressionContext* ExprParser::AssignmentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::AssignmentContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::AssignmentContext::getRuleIndex() const {
  return ExprParser::RuleAssignment;
}


std::any ExprParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::AssignmentContext* ExprParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    variable();
    setState(286);
    match(ExprParser::ASSIGN);
    setState(287);
    expression();
    setState(288);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnContext ------------------------------------------------------------------

ExprParser::WritelnContext::WritelnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WritelnContext::WRITELN() {
  return getToken(ExprParser::WRITELN, 0);
}

tree::TerminalNode* ExprParser::WritelnContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::WritelnContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

tree::TerminalNode* ExprParser::WritelnContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::WritelnContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::WritelnContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::WritelnContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::WritelnContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::WritelnContext::getRuleIndex() const {
  return ExprParser::RuleWriteln;
}


std::any ExprParser::WritelnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWriteln(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WritelnContext* ExprParser::writeln() {
  WritelnContext *_localctx = _tracker.createInstance<WritelnContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RuleWriteln);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(ExprParser::WRITELN);
    setState(291);
    match(ExprParser::LPAREN);
    setState(300);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 35) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 35)) & 2251806793105409) != 0)) {
      setState(292);
      expression();
      setState(297);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(293);
        match(ExprParser::COMMA);
        setState(294);
        expression();
        setState(299);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(302);
    match(ExprParser::RPAREN);
    setState(303);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

ExprParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ForStatementContext::FOR() {
  return getToken(ExprParser::FOR, 0);
}

tree::TerminalNode* ExprParser::ForStatementContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::ForStatementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::ForStatementContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::ForStatementContext::TO() {
  return getToken(ExprParser::TO, 0);
}

tree::TerminalNode* ExprParser::ForStatementContext::DO() {
  return getToken(ExprParser::DO, 0);
}

ExprParser::StatementContext* ExprParser::ForStatementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::ForStatementContext::getRuleIndex() const {
  return ExprParser::RuleForStatement;
}


std::any ExprParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ForStatementContext* ExprParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, ExprParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(ExprParser::FOR);
    setState(306);
    match(ExprParser::IDENTIFIER);
    setState(307);
    match(ExprParser::ASSIGN);
    setState(308);
    expression();
    setState(309);
    match(ExprParser::TO);
    setState(310);
    expression();
    setState(311);
    match(ExprParser::DO);
    setState(312);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

ExprParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CompoundStatementContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::CompoundStatementContext::END() {
  return getToken(ExprParser::END, 0);
}

tree::TerminalNode* ExprParser::CompoundStatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<ExprParser::StatementContext *> ExprParser::CompoundStatementContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::CompoundStatementContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::CompoundStatementContext::getRuleIndex() const {
  return ExprParser::RuleCompoundStatement;
}


std::any ExprParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CompoundStatementContext* ExprParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, ExprParser::RuleCompoundStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(ExprParser::BEGIN);
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & 146366987889557505) != 0)) {
      setState(315);
      statement();
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(321);
    match(ExprParser::END);
    setState(322);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

ExprParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VariableContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::VariableContext::getRuleIndex() const {
  return ExprParser::RuleVariable;
}


std::any ExprParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VariableContext* ExprParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 50, ExprParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayIndexingContext ------------------------------------------------------------------

ExprParser::ArrayIndexingContext::ArrayIndexingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::ArrayIndexingContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::ArrayIndexingContext::LBRACKET() {
  return getTokens(ExprParser::LBRACKET);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::LBRACKET(size_t i) {
  return getToken(ExprParser::LBRACKET, i);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::ArrayIndexingContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::ArrayIndexingContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ArrayIndexingContext::RBRACKET() {
  return getTokens(ExprParser::RBRACKET);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::RBRACKET(size_t i) {
  return getToken(ExprParser::RBRACKET, i);
}


size_t ExprParser::ArrayIndexingContext::getRuleIndex() const {
  return ExprParser::RuleArrayIndexing;
}


std::any ExprParser::ArrayIndexingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArrayIndexing(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ArrayIndexingContext* ExprParser::arrayIndexing() {
  ArrayIndexingContext *_localctx = _tracker.createInstance<ArrayIndexingContext>(_ctx, getState());
  enterRule(_localctx, 52, ExprParser::RuleArrayIndexing);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    variable();
    setState(327);
    match(ExprParser::LBRACKET);
    setState(328);
    expression();
    setState(329);
    match(ExprParser::RBRACKET);
    setState(334);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LBRACKET) {
      setState(330);
      match(ExprParser::LBRACKET);
      setState(331);
      expression();
      setState(332);
      match(ExprParser::RBRACKET);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::SimpleExpressionContext *> ExprParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<ExprParser::SimpleExpressionContext>();
}

ExprParser::SimpleExpressionContext* ExprParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<ExprParser::SimpleExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::ExpressionContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::NE() {
  return getTokens(ExprParser::NE);
}

tree::TerminalNode* ExprParser::ExpressionContext::NE(size_t i) {
  return getToken(ExprParser::NE, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::LT() {
  return getTokens(ExprParser::LT);
}

tree::TerminalNode* ExprParser::ExpressionContext::LT(size_t i) {
  return getToken(ExprParser::LT, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::LTEQ() {
  return getTokens(ExprParser::LTEQ);
}

tree::TerminalNode* ExprParser::ExpressionContext::LTEQ(size_t i) {
  return getToken(ExprParser::LTEQ, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::GT() {
  return getTokens(ExprParser::GT);
}

tree::TerminalNode* ExprParser::ExpressionContext::GT(size_t i) {
  return getToken(ExprParser::GT, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::GTEQ() {
  return getTokens(ExprParser::GTEQ);
}

tree::TerminalNode* ExprParser::ExpressionContext::GTEQ(size_t i) {
  return getToken(ExprParser::GTEQ, i);
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}


std::any ExprParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExpressionContext* ExprParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, ExprParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    simpleExpression();
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 63) != 0)) {
      setState(337);
      _la = _input->LA(1);
      if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & 63) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(338);
      simpleExpression();
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

ExprParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::TermContext *> ExprParser::SimpleExpressionContext::term() {
  return getRuleContexts<ExprParser::TermContext>();
}

ExprParser::TermContext* ExprParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<ExprParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::SimpleExpressionContext::PLUSOP() {
  return getTokens(ExprParser::PLUSOP);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::PLUSOP(size_t i) {
  return getToken(ExprParser::PLUSOP, i);
}

std::vector<tree::TerminalNode *> ExprParser::SimpleExpressionContext::MINUSOP() {
  return getTokens(ExprParser::MINUSOP);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::MINUSOP(size_t i) {
  return getToken(ExprParser::MINUSOP, i);
}


size_t ExprParser::SimpleExpressionContext::getRuleIndex() const {
  return ExprParser::RuleSimpleExpression;
}


std::any ExprParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SimpleExpressionContext* ExprParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, ExprParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    term();
    setState(349);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(345);
      _la = _input->LA(1);
      if (!(_la == ExprParser::PLUSOP

      || _la == ExprParser::MINUSOP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(346);
      term();
      setState(351);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

ExprParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::FactorContext *> ExprParser::TermContext::factor() {
  return getRuleContexts<ExprParser::FactorContext>();
}

ExprParser::FactorContext* ExprParser::TermContext::factor(size_t i) {
  return getRuleContext<ExprParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::MULTOP() {
  return getTokens(ExprParser::MULTOP);
}

tree::TerminalNode* ExprParser::TermContext::MULTOP(size_t i) {
  return getToken(ExprParser::MULTOP, i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::DIVOP() {
  return getTokens(ExprParser::DIVOP);
}

tree::TerminalNode* ExprParser::TermContext::DIVOP(size_t i) {
  return getToken(ExprParser::DIVOP, i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::MOD() {
  return getTokens(ExprParser::MOD);
}

tree::TerminalNode* ExprParser::TermContext::MOD(size_t i) {
  return getToken(ExprParser::MOD, i);
}


size_t ExprParser::TermContext::getRuleIndex() const {
  return ExprParser::RuleTerm;
}


std::any ExprParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TermContext* ExprParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    factor();
    setState(357);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & 412316860417) != 0)) {
      setState(353);
      _la = _input->LA(1);
      if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 33)) & 412316860417) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(354);
      factor();
      setState(359);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

ExprParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FactorContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::FactorContext* ExprParser::FactorContext::factor() {
  return getRuleContext<ExprParser::FactorContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

ExprParser::ExpressionContext* ExprParser::FactorContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::ArrayIndexingContext* ExprParser::FactorContext::arrayIndexing() {
  return getRuleContext<ExprParser::ArrayIndexingContext>(0);
}

ExprParser::NumberContext* ExprParser::FactorContext::number() {
  return getRuleContext<ExprParser::NumberContext>(0);
}

ExprParser::CharacterConstantContext* ExprParser::FactorContext::characterConstant() {
  return getRuleContext<ExprParser::CharacterConstantContext>(0);
}

ExprParser::StringConstantContext* ExprParser::FactorContext::stringConstant() {
  return getRuleContext<ExprParser::StringConstantContext>(0);
}

ExprParser::VariableContext* ExprParser::FactorContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}


size_t ExprParser::FactorContext::getRuleIndex() const {
  return ExprParser::RuleFactor;
}


std::any ExprParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FactorContext* ExprParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 60, ExprParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(360);
      match(ExprParser::NOT);
      setState(361);
      factor();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(362);
      match(ExprParser::LPAREN);
      setState(363);
      expression();
      setState(364);
      match(ExprParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(366);
      arrayIndexing();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(367);
      number();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(368);
      characterConstant();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(369);
      stringConstant();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(370);
      variable();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

ExprParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::NumberContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::NumberContext::REAL() {
  return getToken(ExprParser::REAL, 0);
}


size_t ExprParser::NumberContext::getRuleIndex() const {
  return ExprParser::RuleNumber;
}


std::any ExprParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::NumberContext* ExprParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 62, ExprParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    _la = _input->LA(1);
    if (!(_la == ExprParser::INTEGER

    || _la == ExprParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterConstantContext ------------------------------------------------------------------

ExprParser::CharacterConstantContext::CharacterConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CharacterConstantContext::CHARACTER() {
  return getToken(ExprParser::CHARACTER, 0);
}


size_t ExprParser::CharacterConstantContext::getRuleIndex() const {
  return ExprParser::RuleCharacterConstant;
}


std::any ExprParser::CharacterConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharacterConstant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CharacterConstantContext* ExprParser::characterConstant() {
  CharacterConstantContext *_localctx = _tracker.createInstance<CharacterConstantContext>(_ctx, getState());
  enterRule(_localctx, 64, ExprParser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(ExprParser::CHARACTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstantContext ------------------------------------------------------------------

ExprParser::StringConstantContext::StringConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::StringConstantContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}


size_t ExprParser::StringConstantContext::getRuleIndex() const {
  return ExprParser::RuleStringConstant;
}


std::any ExprParser::StringConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStringConstant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StringConstantContext* ExprParser::stringConstant() {
  StringConstantContext *_localctx = _tracker.createInstance<StringConstantContext>(_ctx, getState());
  enterRule(_localctx, 66, ExprParser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(ExprParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExprParser::initialize() {
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
}
