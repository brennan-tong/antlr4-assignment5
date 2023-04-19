
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
      "constAssignmentList", "constExpression", "varDeclaration", "varDeclarationList", 
      "varIdentifierList", "typeDefDeclaration", "typeDefList", "typeDefElement", 
      "typeIdentifier", "typeSpecification", "simpleType", "enumeratedType", 
      "subrange", "functionDeclaration", "paramDeclaration", "paramIdentifierList", 
      "statement", "assignment", "writeln", "forStatement", "compoundStatement", 
      "ifStatement", "statement_or_comment", "statement_without_semicolon", 
      "assignment_without_semicolon", "variable", "functionCall", "arrayIndexing", 
      "expression", "simpleExpression", "term", "factor", "number", "characterConstant", 
      "stringConstant"
    },
    std::vector<std::string>{
      "", "'.'", "", "':'", "'\"'", "'\\u003F'", "'!'", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "'''", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "'..'", "", "", "'+'", "'-'", "'/'", "'*'", 
      "':='", "'='", "'<>'", "'<='", "'>='", "'<'", "'>'", "'+='", "'-='", 
      "'*='", "'/='", "'^'", "';'", "','", "'('", "')'", "'['", "']'", "'{'", 
      "'}'", "'(*'", "'*)'"
    },
    std::vector<std::string>{
      "", "", "COMMENT", "COLON", "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", 
      "WS", "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
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
  	4,1,95,472,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,1,0,1,0,1,0,5,0,84,8,0,10,
  	0,12,0,87,9,0,1,0,1,0,1,0,5,0,92,8,0,10,0,12,0,95,9,0,1,0,1,0,3,0,99,
  	8,0,1,0,1,0,3,0,103,8,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,115,
  	8,2,10,2,12,2,118,9,2,3,2,120,8,2,1,2,3,2,123,8,2,1,2,1,2,1,3,1,3,1,3,
  	1,3,3,3,131,8,3,1,4,1,4,1,4,1,5,3,5,137,8,5,1,5,1,5,1,5,1,5,3,5,143,8,
  	5,1,5,3,5,146,8,5,1,5,1,5,3,5,150,8,5,1,5,1,5,1,5,1,5,3,5,156,8,5,5,5,
  	158,8,5,10,5,12,5,161,9,5,1,5,3,5,164,8,5,1,5,1,5,3,5,168,8,5,1,6,1,6,
  	1,6,3,6,173,8,6,1,7,1,7,4,7,177,8,7,11,7,12,7,178,1,8,1,8,1,8,1,8,1,8,
  	1,9,1,9,1,9,5,9,189,8,9,10,9,12,9,192,9,9,1,10,1,10,1,10,1,11,4,11,198,
  	8,11,11,11,12,11,199,1,12,1,12,1,12,1,12,3,12,206,8,12,1,12,1,12,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,14,3,14,217,8,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,3,14,253,8,14,1,15,1,15,1,15,3,15,258,8,15,1,16,1,16,1,16,1,16,5,
  	16,264,8,16,10,16,12,16,267,9,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,
  	18,1,18,1,18,1,18,1,18,5,18,281,8,18,10,18,12,18,284,9,18,3,18,286,8,
  	18,1,18,1,18,1,18,1,18,1,18,5,18,293,8,18,10,18,12,18,296,9,18,1,18,1,
  	18,5,18,300,8,18,10,18,12,18,303,9,18,1,18,1,18,1,18,1,19,1,19,1,19,1,
  	19,1,20,1,20,1,20,5,20,315,8,20,10,20,12,20,318,9,20,1,21,1,21,1,21,1,
  	21,1,21,1,21,3,21,326,8,21,1,22,1,22,3,22,330,8,22,1,22,1,22,1,22,1,22,
  	1,23,1,23,1,23,1,23,1,23,5,23,341,8,23,10,23,12,23,344,9,23,3,23,346,
  	8,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,
  	1,25,1,25,5,25,363,8,25,10,25,12,25,366,9,25,1,25,1,25,3,25,370,8,25,
  	1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,3,26,380,8,26,1,27,1,27,1,27,
  	3,27,385,8,27,1,28,1,28,1,28,1,28,1,28,3,28,392,8,28,1,29,1,29,3,29,396,
  	8,29,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,31,1,31,5,31,408,8,31,
  	10,31,12,31,411,9,31,3,31,413,8,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,
  	3,32,422,8,32,1,32,1,32,1,33,1,33,1,33,5,33,429,8,33,10,33,12,33,432,
  	9,33,1,34,1,34,1,34,5,34,437,8,34,10,34,12,34,440,9,34,1,35,1,35,1,35,
  	5,35,445,8,35,10,35,12,35,448,9,35,1,36,1,36,1,36,1,36,1,36,1,36,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,1,36,3,36,464,8,36,1,37,1,37,1,38,1,38,
  	1,39,1,39,1,39,0,0,40,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,0,5,
  	1,0,75,80,2,0,3,3,87,87,1,0,70,71,3,0,19,19,35,35,72,73,2,0,66,66,68,
  	68,503,0,85,1,0,0,0,2,106,1,0,0,0,4,108,1,0,0,0,6,130,1,0,0,0,8,132,1,
  	0,0,0,10,167,1,0,0,0,12,169,1,0,0,0,14,174,1,0,0,0,16,180,1,0,0,0,18,
  	185,1,0,0,0,20,193,1,0,0,0,22,197,1,0,0,0,24,201,1,0,0,0,26,209,1,0,0,
  	0,28,252,1,0,0,0,30,257,1,0,0,0,32,259,1,0,0,0,34,270,1,0,0,0,36,274,
  	1,0,0,0,38,307,1,0,0,0,40,311,1,0,0,0,42,325,1,0,0,0,44,329,1,0,0,0,46,
  	335,1,0,0,0,48,350,1,0,0,0,50,359,1,0,0,0,52,373,1,0,0,0,54,384,1,0,0,
  	0,56,391,1,0,0,0,58,395,1,0,0,0,60,400,1,0,0,0,62,402,1,0,0,0,64,416,
  	1,0,0,0,66,425,1,0,0,0,68,433,1,0,0,0,70,441,1,0,0,0,72,463,1,0,0,0,74,
  	465,1,0,0,0,76,467,1,0,0,0,78,469,1,0,0,0,80,84,3,6,3,0,81,84,3,4,2,0,
  	82,84,3,2,1,0,83,80,1,0,0,0,83,81,1,0,0,0,83,82,1,0,0,0,84,87,1,0,0,0,
  	85,83,1,0,0,0,85,86,1,0,0,0,86,88,1,0,0,0,87,85,1,0,0,0,88,93,5,12,0,
  	0,89,92,3,42,21,0,90,92,3,2,1,0,91,89,1,0,0,0,91,90,1,0,0,0,92,95,1,0,
  	0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,93,1,0,0,0,96,98,5,23,
  	0,0,97,99,3,2,1,0,98,97,1,0,0,0,98,99,1,0,0,0,99,100,1,0,0,0,100,102,
  	5,1,0,0,101,103,3,2,1,0,102,101,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,
  	0,104,105,5,0,0,1,105,1,1,0,0,0,106,107,5,2,0,0,107,3,1,0,0,0,108,109,
  	5,45,0,0,109,122,5,69,0,0,110,119,5,88,0,0,111,116,5,69,0,0,112,113,5,
  	87,0,0,113,115,5,69,0,0,114,112,1,0,0,0,115,118,1,0,0,0,116,114,1,0,0,
  	0,116,117,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,119,111,1,0,0,0,119,
  	120,1,0,0,0,120,121,1,0,0,0,121,123,5,89,0,0,122,110,1,0,0,0,122,123,
  	1,0,0,0,123,124,1,0,0,0,124,125,5,86,0,0,125,5,1,0,0,0,126,131,3,8,4,
  	0,127,131,3,14,7,0,128,131,3,20,10,0,129,131,3,36,18,0,130,126,1,0,0,
  	0,130,127,1,0,0,0,130,128,1,0,0,0,130,129,1,0,0,0,131,7,1,0,0,0,132,133,
  	5,15,0,0,133,134,3,10,5,0,134,9,1,0,0,0,135,137,3,2,1,0,136,135,1,0,0,
  	0,136,137,1,0,0,0,137,138,1,0,0,0,138,139,5,69,0,0,139,142,5,75,0,0,140,
  	143,3,12,6,0,141,143,3,78,39,0,142,140,1,0,0,0,142,141,1,0,0,0,143,159,
  	1,0,0,0,144,146,3,2,1,0,145,144,1,0,0,0,145,146,1,0,0,0,146,147,1,0,0,
  	0,147,149,5,86,0,0,148,150,3,2,1,0,149,148,1,0,0,0,149,150,1,0,0,0,150,
  	151,1,0,0,0,151,152,5,69,0,0,152,155,5,75,0,0,153,156,3,12,6,0,154,156,
  	3,78,39,0,155,153,1,0,0,0,155,154,1,0,0,0,156,158,1,0,0,0,157,145,1,0,
  	0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,163,1,0,0,0,161,
  	159,1,0,0,0,162,164,3,2,1,0,163,162,1,0,0,0,163,164,1,0,0,0,164,165,1,
  	0,0,0,165,166,5,86,0,0,166,168,1,0,0,0,167,136,1,0,0,0,167,168,1,0,0,
  	0,168,11,1,0,0,0,169,172,3,68,34,0,170,171,7,0,0,0,171,173,3,68,34,0,
  	172,170,1,0,0,0,172,173,1,0,0,0,173,13,1,0,0,0,174,176,5,61,0,0,175,177,
  	3,16,8,0,176,175,1,0,0,0,177,178,1,0,0,0,178,176,1,0,0,0,178,179,1,0,
  	0,0,179,15,1,0,0,0,180,181,3,18,9,0,181,182,5,3,0,0,182,183,3,26,13,0,
  	183,184,5,86,0,0,184,17,1,0,0,0,185,190,5,69,0,0,186,187,5,87,0,0,187,
  	189,5,69,0,0,188,186,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,
  	1,0,0,0,191,19,1,0,0,0,192,190,1,0,0,0,193,194,5,57,0,0,194,195,3,22,
  	11,0,195,21,1,0,0,0,196,198,3,24,12,0,197,196,1,0,0,0,198,199,1,0,0,0,
  	199,197,1,0,0,0,199,200,1,0,0,0,200,23,1,0,0,0,201,202,5,69,0,0,202,205,
  	5,75,0,0,203,206,3,28,14,0,204,206,3,30,15,0,205,203,1,0,0,0,205,204,
  	1,0,0,0,206,207,1,0,0,0,207,208,5,86,0,0,208,25,1,0,0,0,209,210,5,69,
  	0,0,210,27,1,0,0,0,211,212,5,10,0,0,212,213,5,90,0,0,213,216,3,34,17,
  	0,214,215,5,87,0,0,215,217,3,34,17,0,216,214,1,0,0,0,216,217,1,0,0,0,
  	217,218,1,0,0,0,218,219,5,91,0,0,219,220,5,39,0,0,220,221,3,26,13,0,221,
  	253,1,0,0,0,222,223,5,10,0,0,223,224,5,90,0,0,224,225,3,34,17,0,225,226,
  	5,91,0,0,226,227,5,39,0,0,227,228,5,10,0,0,228,229,5,90,0,0,229,230,3,
  	34,17,0,230,231,5,91,0,0,231,232,5,39,0,0,232,233,3,26,13,0,233,253,1,
  	0,0,0,234,235,5,10,0,0,235,236,5,90,0,0,236,237,3,34,17,0,237,238,5,91,
  	0,0,238,239,5,39,0,0,239,240,5,10,0,0,240,241,5,90,0,0,241,242,3,34,17,
  	0,242,243,5,91,0,0,243,244,5,39,0,0,244,245,5,10,0,0,245,246,5,90,0,0,
  	246,247,3,34,17,0,247,248,5,91,0,0,248,249,5,39,0,0,249,250,3,26,13,0,
  	250,253,1,0,0,0,251,253,3,30,15,0,252,211,1,0,0,0,252,222,1,0,0,0,252,
  	234,1,0,0,0,252,251,1,0,0,0,253,29,1,0,0,0,254,258,5,69,0,0,255,258,3,
  	34,17,0,256,258,3,32,16,0,257,254,1,0,0,0,257,255,1,0,0,0,257,256,1,0,
  	0,0,258,31,1,0,0,0,259,260,5,88,0,0,260,265,5,69,0,0,261,262,5,87,0,0,
  	262,264,5,69,0,0,263,261,1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,
  	266,1,0,0,0,266,268,1,0,0,0,267,265,1,0,0,0,268,269,5,89,0,0,269,33,1,
  	0,0,0,270,271,3,66,33,0,271,272,5,67,0,0,272,273,3,66,33,0,273,35,1,0,
  	0,0,274,275,5,27,0,0,275,276,5,69,0,0,276,285,5,88,0,0,277,282,3,38,19,
  	0,278,279,5,87,0,0,279,281,3,38,19,0,280,278,1,0,0,0,281,284,1,0,0,0,
  	282,280,1,0,0,0,282,283,1,0,0,0,283,286,1,0,0,0,284,282,1,0,0,0,285,277,
  	1,0,0,0,285,286,1,0,0,0,286,287,1,0,0,0,287,288,5,89,0,0,288,289,5,3,
  	0,0,289,290,3,26,13,0,290,294,5,86,0,0,291,293,3,6,3,0,292,291,1,0,0,
  	0,293,296,1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,297,1,0,0,0,296,
  	294,1,0,0,0,297,301,5,12,0,0,298,300,3,42,21,0,299,298,1,0,0,0,300,303,
  	1,0,0,0,301,299,1,0,0,0,301,302,1,0,0,0,302,304,1,0,0,0,303,301,1,0,0,
  	0,304,305,5,23,0,0,305,306,5,86,0,0,306,37,1,0,0,0,307,308,3,40,20,0,
  	308,309,5,3,0,0,309,310,3,26,13,0,310,39,1,0,0,0,311,316,5,69,0,0,312,
  	313,5,87,0,0,313,315,5,69,0,0,314,312,1,0,0,0,315,318,1,0,0,0,316,314,
  	1,0,0,0,316,317,1,0,0,0,317,41,1,0,0,0,318,316,1,0,0,0,319,326,3,44,22,
  	0,320,326,3,46,23,0,321,326,3,48,24,0,322,326,3,50,25,0,323,326,3,52,
  	26,0,324,326,3,2,1,0,325,319,1,0,0,0,325,320,1,0,0,0,325,321,1,0,0,0,
  	325,322,1,0,0,0,325,323,1,0,0,0,325,324,1,0,0,0,326,43,1,0,0,0,327,330,
  	3,64,32,0,328,330,3,60,30,0,329,327,1,0,0,0,329,328,1,0,0,0,330,331,1,
  	0,0,0,331,332,5,74,0,0,332,333,3,66,33,0,333,334,5,86,0,0,334,45,1,0,
  	0,0,335,336,5,63,0,0,336,345,5,88,0,0,337,342,3,66,33,0,338,339,7,1,0,
  	0,339,341,3,66,33,0,340,338,1,0,0,0,341,344,1,0,0,0,342,340,1,0,0,0,342,
  	343,1,0,0,0,343,346,1,0,0,0,344,342,1,0,0,0,345,337,1,0,0,0,345,346,1,
  	0,0,0,346,347,1,0,0,0,347,348,5,89,0,0,348,349,5,86,0,0,349,47,1,0,0,
  	0,350,351,5,26,0,0,351,352,5,69,0,0,352,353,5,74,0,0,353,354,3,66,33,
  	0,354,355,5,55,0,0,355,356,3,66,33,0,356,357,5,20,0,0,357,358,3,50,25,
  	0,358,49,1,0,0,0,359,364,5,12,0,0,360,363,3,2,1,0,361,363,3,42,21,0,362,
  	360,1,0,0,0,362,361,1,0,0,0,363,366,1,0,0,0,364,362,1,0,0,0,364,365,1,
  	0,0,0,365,367,1,0,0,0,366,364,1,0,0,0,367,369,5,23,0,0,368,370,3,2,1,
  	0,369,368,1,0,0,0,369,370,1,0,0,0,370,371,1,0,0,0,371,372,5,86,0,0,372,
  	51,1,0,0,0,373,374,5,29,0,0,374,375,3,66,33,0,375,376,5,54,0,0,376,379,
  	3,54,27,0,377,378,5,22,0,0,378,380,3,54,27,0,379,377,1,0,0,0,379,380,
  	1,0,0,0,380,53,1,0,0,0,381,385,3,56,28,0,382,385,3,42,21,0,383,385,3,
  	2,1,0,384,381,1,0,0,0,384,382,1,0,0,0,384,383,1,0,0,0,385,55,1,0,0,0,
  	386,392,3,58,29,0,387,392,3,46,23,0,388,392,3,48,24,0,389,392,3,50,25,
  	0,390,392,3,52,26,0,391,386,1,0,0,0,391,387,1,0,0,0,391,388,1,0,0,0,391,
  	389,1,0,0,0,391,390,1,0,0,0,392,57,1,0,0,0,393,396,3,64,32,0,394,396,
  	3,60,30,0,395,393,1,0,0,0,395,394,1,0,0,0,396,397,1,0,0,0,397,398,5,74,
  	0,0,398,399,3,66,33,0,399,59,1,0,0,0,400,401,5,69,0,0,401,61,1,0,0,0,
  	402,403,5,69,0,0,403,412,5,88,0,0,404,409,3,66,33,0,405,406,5,87,0,0,
  	406,408,3,66,33,0,407,405,1,0,0,0,408,411,1,0,0,0,409,407,1,0,0,0,409,
  	410,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,0,412,404,1,0,0,0,412,413,1,
  	0,0,0,413,414,1,0,0,0,414,415,5,89,0,0,415,63,1,0,0,0,416,417,3,60,30,
  	0,417,418,5,90,0,0,418,421,3,66,33,0,419,420,5,87,0,0,420,422,3,66,33,
  	0,421,419,1,0,0,0,421,422,1,0,0,0,422,423,1,0,0,0,423,424,5,91,0,0,424,
  	65,1,0,0,0,425,430,3,68,34,0,426,427,7,0,0,0,427,429,3,68,34,0,428,426,
  	1,0,0,0,429,432,1,0,0,0,430,428,1,0,0,0,430,431,1,0,0,0,431,67,1,0,0,
  	0,432,430,1,0,0,0,433,438,3,70,35,0,434,435,7,2,0,0,435,437,3,70,35,0,
  	436,434,1,0,0,0,437,440,1,0,0,0,438,436,1,0,0,0,438,439,1,0,0,0,439,69,
  	1,0,0,0,440,438,1,0,0,0,441,446,3,72,36,0,442,443,7,3,0,0,443,445,3,72,
  	36,0,444,442,1,0,0,0,445,448,1,0,0,0,446,444,1,0,0,0,446,447,1,0,0,0,
  	447,71,1,0,0,0,448,446,1,0,0,0,449,450,5,37,0,0,450,464,3,72,36,0,451,
  	452,5,88,0,0,452,453,3,66,33,0,453,454,5,89,0,0,454,464,1,0,0,0,455,464,
  	3,64,32,0,456,464,3,74,37,0,457,464,3,76,38,0,458,464,3,78,39,0,459,464,
  	3,62,31,0,460,464,3,60,30,0,461,464,5,56,0,0,462,464,5,24,0,0,463,449,
  	1,0,0,0,463,451,1,0,0,0,463,455,1,0,0,0,463,456,1,0,0,0,463,457,1,0,0,
  	0,463,458,1,0,0,0,463,459,1,0,0,0,463,460,1,0,0,0,463,461,1,0,0,0,463,
  	462,1,0,0,0,464,73,1,0,0,0,465,466,7,4,0,0,466,75,1,0,0,0,467,468,5,52,
  	0,0,468,77,1,0,0,0,469,470,5,53,0,0,470,79,1,0,0,0,50,83,85,91,93,98,
  	102,116,119,122,130,136,142,145,149,155,159,163,167,172,178,190,199,205,
  	216,252,257,265,282,285,294,301,316,325,329,342,345,362,364,369,379,384,
  	391,395,409,412,421,430,438,446,463
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

tree::TerminalNode* ExprParser::ProgContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::ProgContext::END() {
  return getToken(ExprParser::END, 0);
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

std::vector<ExprParser::CommentContext *> ExprParser::ProgContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::ProgContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
}

std::vector<ExprParser::StatementContext *> ExprParser::ProgContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::ProgContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
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
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2449993381795889156) != 0)) {
      setState(83);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ExprParser::CONST:
        case ExprParser::FUNCTION:
        case ExprParser::TYPE:
        case ExprParser::VAR: {
          setState(80);
          declaration();
          break;
        }

        case ExprParser::PROGRAM: {
          setState(81);
          programDeclaration();
          break;
        }

        case ExprParser::COMMENT: {
          setState(82);
          comment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(ExprParser::BEGIN);
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372036250791932) != 0) || _la == ExprParser::IDENTIFIER) {
      setState(91);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(89);
        statement();
        break;
      }

      case 2: {
        setState(90);
        comment();
        break;
      }

      default:
        break;
      }
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(96);
    match(ExprParser::END);
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMENT) {
      setState(97);
      comment();
    }
    setState(100);
    match(ExprParser::T__0);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMENT) {
      setState(101);
      comment();
    }
    setState(104);
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

tree::TerminalNode* ExprParser::CommentContext::COMMENT() {
  return getToken(ExprParser::COMMENT, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(ExprParser::COMMENT);
   
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

tree::TerminalNode* ExprParser::ProgramDeclarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
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
    setState(108);
    match(ExprParser::PROGRAM);
    setState(109);
    match(ExprParser::IDENTIFIER);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(110);
      match(ExprParser::LPAREN);
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::IDENTIFIER) {
        setState(111);
        match(ExprParser::IDENTIFIER);
        setState(116);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::COMMA) {
          setState(112);
          match(ExprParser::COMMA);
          setState(113);
          match(ExprParser::IDENTIFIER);
          setState(118);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(121);
      match(ExprParser::RPAREN);
    }
    setState(124);
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
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(126);
        constDeclaration();
        break;
      }

      case ExprParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(127);
        varDeclaration();
        break;
      }

      case ExprParser::TYPE: {
        enterOuterAlt(_localctx, 3);
        setState(128);
        typeDefDeclaration();
        break;
      }

      case ExprParser::FUNCTION: {
        enterOuterAlt(_localctx, 4);
        setState(129);
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

ExprParser::ConstAssignmentListContext* ExprParser::ConstDeclarationContext::constAssignmentList() {
  return getRuleContext<ExprParser::ConstAssignmentListContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(ExprParser::CONST);
    setState(133);
    constAssignmentList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstAssignmentListContext ------------------------------------------------------------------

ExprParser::ConstAssignmentListContext::ConstAssignmentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::ConstAssignmentListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ConstAssignmentListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::ConstAssignmentListContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::ConstAssignmentListContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<tree::TerminalNode *> ExprParser::ConstAssignmentListContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::ConstAssignmentListContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}

std::vector<ExprParser::ConstExpressionContext *> ExprParser::ConstAssignmentListContext::constExpression() {
  return getRuleContexts<ExprParser::ConstExpressionContext>();
}

ExprParser::ConstExpressionContext* ExprParser::ConstAssignmentListContext::constExpression(size_t i) {
  return getRuleContext<ExprParser::ConstExpressionContext>(i);
}

std::vector<ExprParser::StringConstantContext *> ExprParser::ConstAssignmentListContext::stringConstant() {
  return getRuleContexts<ExprParser::StringConstantContext>();
}

ExprParser::StringConstantContext* ExprParser::ConstAssignmentListContext::stringConstant(size_t i) {
  return getRuleContext<ExprParser::StringConstantContext>(i);
}

std::vector<ExprParser::CommentContext *> ExprParser::ConstAssignmentListContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::ConstAssignmentListContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
}


size_t ExprParser::ConstAssignmentListContext::getRuleIndex() const {
  return ExprParser::RuleConstAssignmentList;
}


std::any ExprParser::ConstAssignmentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstAssignmentList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstAssignmentListContext* ExprParser::constAssignmentList() {
  ConstAssignmentListContext *_localctx = _tracker.createInstance<ConstAssignmentListContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleConstAssignmentList);
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
    setState(167);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(136);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::COMMENT) {
        setState(135);
        comment();
      }
      setState(138);
      match(ExprParser::IDENTIFIER);
      setState(139);
      match(ExprParser::EQUAL);
      setState(142);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(140);
        constExpression();
        break;
      }

      case 2: {
        setState(141);
        stringConstant();
        break;
      }

      default:
        break;
      }
      setState(159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(145);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == ExprParser::COMMENT) {
            setState(144);
            comment();
          }
          setState(147);
          match(ExprParser::SEMICOLON);
          setState(149);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == ExprParser::COMMENT) {
            setState(148);
            comment();
          }
          setState(151);
          match(ExprParser::IDENTIFIER);
          setState(152);
          match(ExprParser::EQUAL);
          setState(155);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(153);
            constExpression();
            break;
          }

          case 2: {
            setState(154);
            stringConstant();
            break;
          }

          default:
            break;
          } 
        }
        setState(161);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
      setState(163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::COMMENT) {
        setState(162);
        comment();
      }
      setState(165);
      match(ExprParser::SEMICOLON);
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
  enterRule(_localctx, 12, ExprParser::RuleConstExpression);
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
    setState(169);
    simpleExpression();
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 63) != 0)) {
      setState(170);
      _la = _input->LA(1);
      if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 63) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(171);
      simpleExpression();
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
  enterRule(_localctx, 14, ExprParser::RuleVarDeclaration);
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
    setState(174);
    match(ExprParser::VAR);
    setState(176); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(175);
      varDeclarationList();
      setState(178); 
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
  enterRule(_localctx, 16, ExprParser::RuleVarDeclarationList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    varIdentifierList();
    setState(181);
    match(ExprParser::COLON);
    setState(182);
    typeIdentifier();
    setState(183);
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
  enterRule(_localctx, 18, ExprParser::RuleVarIdentifierList);
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
    setState(185);
    match(ExprParser::IDENTIFIER);
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(186);
      match(ExprParser::COMMA);
      setState(187);
      match(ExprParser::IDENTIFIER);
      setState(192);
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
  enterRule(_localctx, 20, ExprParser::RuleTypeDefDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(ExprParser::TYPE);
    setState(194);
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
  enterRule(_localctx, 22, ExprParser::RuleTypeDefList);
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
    setState(197); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(196);
      typeDefElement();
      setState(199); 
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
  enterRule(_localctx, 24, ExprParser::RuleTypeDefElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(ExprParser::IDENTIFIER);
    setState(202);
    match(ExprParser::EQUAL);
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(203);
      typeSpecification();
      break;
    }

    case 2: {
      setState(204);
      simpleType();
      break;
    }

    default:
      break;
    }
    setState(207);
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
  enterRule(_localctx, 26, ExprParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
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

tree::TerminalNode* ExprParser::TypeSpecificationContext::COMMA() {
  return getToken(ExprParser::COMMA, 0);
}

ExprParser::SimpleTypeContext* ExprParser::TypeSpecificationContext::simpleType() {
  return getRuleContext<ExprParser::SimpleTypeContext>(0);
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
  enterRule(_localctx, 28, ExprParser::RuleTypeSpecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      match(ExprParser::ARRAY);
      setState(212);
      match(ExprParser::LBRACKET);
      setState(213);
      subrange();
      setState(216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::COMMA) {
        setState(214);
        match(ExprParser::COMMA);
        setState(215);
        subrange();
      }
      setState(218);
      match(ExprParser::RBRACKET);
      setState(219);
      match(ExprParser::OF);
      setState(220);
      typeIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(222);
      match(ExprParser::ARRAY);
      setState(223);
      match(ExprParser::LBRACKET);
      setState(224);
      subrange();
      setState(225);
      match(ExprParser::RBRACKET);
      setState(226);
      match(ExprParser::OF);
      setState(227);
      match(ExprParser::ARRAY);
      setState(228);
      match(ExprParser::LBRACKET);
      setState(229);
      subrange();
      setState(230);
      match(ExprParser::RBRACKET);
      setState(231);
      match(ExprParser::OF);
      setState(232);
      typeIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(234);
      match(ExprParser::ARRAY);
      setState(235);
      match(ExprParser::LBRACKET);
      setState(236);
      subrange();
      setState(237);
      match(ExprParser::RBRACKET);
      setState(238);
      match(ExprParser::OF);
      setState(239);
      match(ExprParser::ARRAY);
      setState(240);
      match(ExprParser::LBRACKET);
      setState(241);
      subrange();
      setState(242);
      match(ExprParser::RBRACKET);
      setState(243);
      match(ExprParser::OF);
      setState(244);
      match(ExprParser::ARRAY);
      setState(245);
      match(ExprParser::LBRACKET);
      setState(246);
      subrange();
      setState(247);
      match(ExprParser::RBRACKET);
      setState(248);
      match(ExprParser::OF);
      setState(249);
      typeIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(251);
      simpleType();
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

ExprParser::EnumeratedTypeContext* ExprParser::SimpleTypeContext::enumeratedType() {
  return getRuleContext<ExprParser::EnumeratedTypeContext>(0);
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
  enterRule(_localctx, 30, ExprParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(254);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(255);
      subrange();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(256);
      enumeratedType();
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

//----------------- EnumeratedTypeContext ------------------------------------------------------------------

ExprParser::EnumeratedTypeContext::EnumeratedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::EnumeratedTypeContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::EnumeratedTypeContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::EnumeratedTypeContext::getRuleIndex() const {
  return ExprParser::RuleEnumeratedType;
}


std::any ExprParser::EnumeratedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEnumeratedType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::EnumeratedTypeContext* ExprParser::enumeratedType() {
  EnumeratedTypeContext *_localctx = _tracker.createInstance<EnumeratedTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleEnumeratedType);
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
    setState(259);
    match(ExprParser::LPAREN);
    setState(260);
    match(ExprParser::IDENTIFIER);
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(261);
      match(ExprParser::COMMA);
      setState(262);
      match(ExprParser::IDENTIFIER);
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    match(ExprParser::RPAREN);
   
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
    setState(270);
    expression();
    setState(271);
    match(ExprParser::RANGE);
    setState(272);
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
    setState(274);
    match(ExprParser::FUNCTION);
    setState(275);
    match(ExprParser::IDENTIFIER);
    setState(276);
    match(ExprParser::LPAREN);
    setState(285);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::IDENTIFIER) {
      setState(277);
      paramDeclaration();
      setState(282);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(278);
        match(ExprParser::COMMA);
        setState(279);
        paramDeclaration();
        setState(284);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(287);
    match(ExprParser::RPAREN);
    setState(288);
    match(ExprParser::COLON);
    setState(289);
    typeIdentifier();
    setState(290);
    match(ExprParser::SEMICOLON);
    setState(294);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2449958197423800320) != 0)) {
      setState(291);
      declaration();
      setState(296);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(297);
    match(ExprParser::BEGIN);
    setState(301);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372036250791932) != 0) || _la == ExprParser::IDENTIFIER) {
      setState(298);
      statement();
      setState(303);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(304);
    match(ExprParser::END);
    setState(305);
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

ExprParser::ParamIdentifierListContext* ExprParser::ParamDeclarationContext::paramIdentifierList() {
  return getRuleContext<ExprParser::ParamIdentifierListContext>(0);
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
    setState(307);
    paramIdentifierList();
    setState(308);
    match(ExprParser::COLON);
    setState(309);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamIdentifierListContext ------------------------------------------------------------------

ExprParser::ParamIdentifierListContext::ParamIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::ParamIdentifierListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ParamIdentifierListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::ParamIdentifierListContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::ParamIdentifierListContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::ParamIdentifierListContext::getRuleIndex() const {
  return ExprParser::RuleParamIdentifierList;
}


std::any ExprParser::ParamIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParamIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ParamIdentifierListContext* ExprParser::paramIdentifierList() {
  ParamIdentifierListContext *_localctx = _tracker.createInstance<ParamIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleParamIdentifierList);
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
    setState(311);
    match(ExprParser::IDENTIFIER);
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(312);
      match(ExprParser::COMMA);
      setState(313);
      match(ExprParser::IDENTIFIER);
      setState(318);
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

ExprParser::IfStatementContext* ExprParser::StatementContext::ifStatement() {
  return getRuleContext<ExprParser::IfStatementContext>(0);
}

ExprParser::CommentContext* ExprParser::StatementContext::comment() {
  return getRuleContext<ExprParser::CommentContext>(0);
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
  enterRule(_localctx, 42, ExprParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(319);
        assignment();
        break;
      }

      case ExprParser::WRITELN: {
        enterOuterAlt(_localctx, 2);
        setState(320);
        writeln();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(321);
        forStatement();
        break;
      }

      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 4);
        setState(322);
        compoundStatement();
        break;
      }

      case ExprParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(323);
        ifStatement();
        break;
      }

      case ExprParser::COMMENT: {
        enterOuterAlt(_localctx, 6);
        setState(324);
        comment();
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

tree::TerminalNode* ExprParser::AssignmentContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExpressionContext* ExprParser::AssignmentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::AssignmentContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::ArrayIndexingContext* ExprParser::AssignmentContext::arrayIndexing() {
  return getRuleContext<ExprParser::ArrayIndexingContext>(0);
}

ExprParser::VariableContext* ExprParser::AssignmentContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
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
  enterRule(_localctx, 44, ExprParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(327);
      arrayIndexing();
      break;
    }

    case 2: {
      setState(328);
      variable();
      break;
    }

    default:
      break;
    }
    setState(331);
    match(ExprParser::ASSIGN);
    setState(332);
    expression();
    setState(333);
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

std::vector<tree::TerminalNode *> ExprParser::WritelnContext::COLON() {
  return getTokens(ExprParser::COLON);
}

tree::TerminalNode* ExprParser::WritelnContext::COLON(size_t i) {
  return getToken(ExprParser::COLON, i);
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
  enterRule(_localctx, 46, ExprParser::RuleWriteln);
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
    setState(335);
    match(ExprParser::WRITELN);
    setState(336);
    match(ExprParser::LPAREN);
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 85568530375770112) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 4194317) != 0)) {
      setState(337);
      expression();
      setState(342);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COLON || _la == ExprParser::COMMA) {
        setState(338);
        _la = _input->LA(1);
        if (!(_la == ExprParser::COLON || _la == ExprParser::COMMA)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(339);
        expression();
        setState(344);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(347);
    match(ExprParser::RPAREN);
    setState(348);
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

ExprParser::CompoundStatementContext* ExprParser::ForStatementContext::compoundStatement() {
  return getRuleContext<ExprParser::CompoundStatementContext>(0);
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
  enterRule(_localctx, 48, ExprParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(ExprParser::FOR);
    setState(351);
    match(ExprParser::IDENTIFIER);
    setState(352);
    match(ExprParser::ASSIGN);
    setState(353);
    expression();
    setState(354);
    match(ExprParser::TO);
    setState(355);
    expression();
    setState(356);
    match(ExprParser::DO);
    setState(357);
    compoundStatement();
   
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

std::vector<ExprParser::CommentContext *> ExprParser::CompoundStatementContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::CompoundStatementContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
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
  enterRule(_localctx, 50, ExprParser::RuleCompoundStatement);
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
    setState(359);
    match(ExprParser::BEGIN);
    setState(364);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372036250791932) != 0) || _la == ExprParser::IDENTIFIER) {
      setState(362);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(360);
        comment();
        break;
      }

      case 2: {
        setState(361);
        statement();
        break;
      }

      default:
        break;
      }
      setState(366);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(367);
    match(ExprParser::END);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMENT) {
      setState(368);
      comment();
    }
    setState(371);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

ExprParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::IfStatementContext::IF() {
  return getToken(ExprParser::IF, 0);
}

ExprParser::ExpressionContext* ExprParser::IfStatementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::IfStatementContext::THEN() {
  return getToken(ExprParser::THEN, 0);
}

std::vector<ExprParser::Statement_or_commentContext *> ExprParser::IfStatementContext::statement_or_comment() {
  return getRuleContexts<ExprParser::Statement_or_commentContext>();
}

ExprParser::Statement_or_commentContext* ExprParser::IfStatementContext::statement_or_comment(size_t i) {
  return getRuleContext<ExprParser::Statement_or_commentContext>(i);
}

tree::TerminalNode* ExprParser::IfStatementContext::ELSE() {
  return getToken(ExprParser::ELSE, 0);
}


size_t ExprParser::IfStatementContext::getRuleIndex() const {
  return ExprParser::RuleIfStatement;
}


std::any ExprParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IfStatementContext* ExprParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, ExprParser::RuleIfStatement);

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
    match(ExprParser::IF);
    setState(374);
    expression();
    setState(375);
    match(ExprParser::THEN);
    setState(376);
    statement_or_comment();
    setState(379);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(377);
      match(ExprParser::ELSE);
      setState(378);
      statement_or_comment();
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

//----------------- Statement_or_commentContext ------------------------------------------------------------------

ExprParser::Statement_or_commentContext::Statement_or_commentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Statement_without_semicolonContext* ExprParser::Statement_or_commentContext::statement_without_semicolon() {
  return getRuleContext<ExprParser::Statement_without_semicolonContext>(0);
}

ExprParser::StatementContext* ExprParser::Statement_or_commentContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

ExprParser::CommentContext* ExprParser::Statement_or_commentContext::comment() {
  return getRuleContext<ExprParser::CommentContext>(0);
}


size_t ExprParser::Statement_or_commentContext::getRuleIndex() const {
  return ExprParser::RuleStatement_or_comment;
}


std::any ExprParser::Statement_or_commentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_or_comment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Statement_or_commentContext* ExprParser::statement_or_comment() {
  Statement_or_commentContext *_localctx = _tracker.createInstance<Statement_or_commentContext>(_ctx, getState());
  enterRule(_localctx, 54, ExprParser::RuleStatement_or_comment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(384);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(381);
      statement_without_semicolon();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(382);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(383);
      comment();
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

//----------------- Statement_without_semicolonContext ------------------------------------------------------------------

ExprParser::Statement_without_semicolonContext::Statement_without_semicolonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Assignment_without_semicolonContext* ExprParser::Statement_without_semicolonContext::assignment_without_semicolon() {
  return getRuleContext<ExprParser::Assignment_without_semicolonContext>(0);
}

ExprParser::WritelnContext* ExprParser::Statement_without_semicolonContext::writeln() {
  return getRuleContext<ExprParser::WritelnContext>(0);
}

ExprParser::ForStatementContext* ExprParser::Statement_without_semicolonContext::forStatement() {
  return getRuleContext<ExprParser::ForStatementContext>(0);
}

ExprParser::CompoundStatementContext* ExprParser::Statement_without_semicolonContext::compoundStatement() {
  return getRuleContext<ExprParser::CompoundStatementContext>(0);
}

ExprParser::IfStatementContext* ExprParser::Statement_without_semicolonContext::ifStatement() {
  return getRuleContext<ExprParser::IfStatementContext>(0);
}


size_t ExprParser::Statement_without_semicolonContext::getRuleIndex() const {
  return ExprParser::RuleStatement_without_semicolon;
}


std::any ExprParser::Statement_without_semicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_without_semicolon(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Statement_without_semicolonContext* ExprParser::statement_without_semicolon() {
  Statement_without_semicolonContext *_localctx = _tracker.createInstance<Statement_without_semicolonContext>(_ctx, getState());
  enterRule(_localctx, 56, ExprParser::RuleStatement_without_semicolon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(391);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(386);
        assignment_without_semicolon();
        break;
      }

      case ExprParser::WRITELN: {
        enterOuterAlt(_localctx, 2);
        setState(387);
        writeln();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(388);
        forStatement();
        break;
      }

      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 4);
        setState(389);
        compoundStatement();
        break;
      }

      case ExprParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(390);
        ifStatement();
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

//----------------- Assignment_without_semicolonContext ------------------------------------------------------------------

ExprParser::Assignment_without_semicolonContext::Assignment_without_semicolonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Assignment_without_semicolonContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExpressionContext* ExprParser::Assignment_without_semicolonContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::ArrayIndexingContext* ExprParser::Assignment_without_semicolonContext::arrayIndexing() {
  return getRuleContext<ExprParser::ArrayIndexingContext>(0);
}

ExprParser::VariableContext* ExprParser::Assignment_without_semicolonContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}


size_t ExprParser::Assignment_without_semicolonContext::getRuleIndex() const {
  return ExprParser::RuleAssignment_without_semicolon;
}


std::any ExprParser::Assignment_without_semicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignment_without_semicolon(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Assignment_without_semicolonContext* ExprParser::assignment_without_semicolon() {
  Assignment_without_semicolonContext *_localctx = _tracker.createInstance<Assignment_without_semicolonContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RuleAssignment_without_semicolon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(393);
      arrayIndexing();
      break;
    }

    case 2: {
      setState(394);
      variable();
      break;
    }

    default:
      break;
    }
    setState(397);
    match(ExprParser::ASSIGN);
    setState(398);
    expression();
   
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
  enterRule(_localctx, 60, ExprParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

ExprParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FunctionCallContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::FunctionCallContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::FunctionCallContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::FunctionCallContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::FunctionCallContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::FunctionCallContext::getRuleIndex() const {
  return ExprParser::RuleFunctionCall;
}


std::any ExprParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FunctionCallContext* ExprParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 62, ExprParser::RuleFunctionCall);
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
    setState(402);
    match(ExprParser::IDENTIFIER);
    setState(403);
    match(ExprParser::LPAREN);
    setState(412);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 85568530375770112) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 4194317) != 0)) {
      setState(404);
      expression();
      setState(409);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(405);
        match(ExprParser::COMMA);
        setState(406);
        expression();
        setState(411);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(414);
    match(ExprParser::RPAREN);
   
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

tree::TerminalNode* ExprParser::ArrayIndexingContext::LBRACKET() {
  return getToken(ExprParser::LBRACKET, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::ArrayIndexingContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::ArrayIndexingContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::RBRACKET() {
  return getToken(ExprParser::RBRACKET, 0);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::COMMA() {
  return getToken(ExprParser::COMMA, 0);
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
  enterRule(_localctx, 64, ExprParser::RuleArrayIndexing);
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
    setState(416);
    variable();
    setState(417);
    match(ExprParser::LBRACKET);
    setState(418);
    expression();
    setState(421);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMA) {
      setState(419);
      match(ExprParser::COMMA);
      setState(420);
      expression();
    }
    setState(423);
    match(ExprParser::RBRACKET);
   
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
  enterRule(_localctx, 66, ExprParser::RuleExpression);
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
    setState(425);
    simpleExpression();
    setState(430);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 63) != 0)) {
      setState(426);
      _la = _input->LA(1);
      if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 63) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(427);
      simpleExpression();
      setState(432);
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
  enterRule(_localctx, 68, ExprParser::RuleSimpleExpression);
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
    setState(433);
    term();
    setState(438);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(434);
      _la = _input->LA(1);
      if (!(_la == ExprParser::PLUSOP

      || _la == ExprParser::MINUSOP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(435);
      term();
      setState(440);
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

std::vector<tree::TerminalNode *> ExprParser::TermContext::DIV() {
  return getTokens(ExprParser::DIV);
}

tree::TerminalNode* ExprParser::TermContext::DIV(size_t i) {
  return getToken(ExprParser::DIV, i);
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
  enterRule(_localctx, 70, ExprParser::RuleTerm);
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
    setState(441);
    factor();
    setState(446);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & 27021597764288513) != 0)) {
      setState(442);
      _la = _input->LA(1);
      if (!(((((_la - 19) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 19)) & 27021597764288513) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(443);
      factor();
      setState(448);
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

ExprParser::FunctionCallContext* ExprParser::FactorContext::functionCall() {
  return getRuleContext<ExprParser::FunctionCallContext>(0);
}

ExprParser::VariableContext* ExprParser::FactorContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::TRUE() {
  return getToken(ExprParser::TRUE, 0);
}

tree::TerminalNode* ExprParser::FactorContext::FALSE() {
  return getToken(ExprParser::FALSE, 0);
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
  enterRule(_localctx, 72, ExprParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(449);
      match(ExprParser::NOT);
      setState(450);
      factor();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(451);
      match(ExprParser::LPAREN);
      setState(452);
      expression();
      setState(453);
      match(ExprParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(455);
      arrayIndexing();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(456);
      number();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(457);
      characterConstant();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(458);
      stringConstant();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(459);
      functionCall();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(460);
      variable();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(461);
      match(ExprParser::TRUE);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(462);
      match(ExprParser::FALSE);
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
  enterRule(_localctx, 74, ExprParser::RuleNumber);
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
    setState(465);
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
  enterRule(_localctx, 76, ExprParser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
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
  enterRule(_localctx, 78, ExprParser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
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
