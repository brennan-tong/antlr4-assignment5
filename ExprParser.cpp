
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
      "varDeclaration", "typeDefDeclaration", "typeIdentifier", "typeSpecification", 
      "subrange", "functionDeclaration", "paramDeclaration", "statement", 
      "assignment", "writeln", "forStatement", "compoundStatement", "variable", 
      "arrayIndexing", "expression", "simpleExpression", "term", "factor", 
      "number", "characterConstant", "stringConstant"
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
  	4,1,93,263,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,0,1,0,5,0,57,8,0,
  	10,0,12,0,60,9,0,1,0,1,0,1,1,1,1,5,1,66,8,1,10,1,12,1,69,9,1,1,1,3,1,
  	72,8,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,80,8,2,10,2,12,2,83,9,2,3,2,85,8,2,
  	1,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,94,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,3,8,124,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,
  	10,1,10,5,10,138,8,10,10,10,12,10,141,9,10,3,10,143,8,10,1,10,1,10,1,
  	10,1,10,1,10,5,10,150,8,10,10,10,12,10,153,9,10,1,10,1,10,5,10,157,8,
  	10,10,10,12,10,160,9,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,3,12,173,8,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,5,14,185,8,14,10,14,12,14,188,9,14,3,14,190,8,14,1,14,1,14,1,14,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,5,16,206,8,16,
  	10,16,12,16,209,9,16,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,
  	1,19,1,19,5,19,223,8,19,10,19,12,19,226,9,19,1,20,1,20,1,20,5,20,231,
  	8,20,10,20,12,20,234,9,20,1,21,1,21,1,21,5,21,239,8,21,10,21,12,21,242,
  	9,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,255,
  	8,22,1,23,1,23,1,24,1,24,1,25,1,25,1,25,0,0,26,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,4,1,0,73,78,1,0,
  	68,69,2,0,33,33,70,71,2,0,64,64,66,66,267,0,58,1,0,0,0,2,63,1,0,0,0,4,
  	73,1,0,0,0,6,93,1,0,0,0,8,95,1,0,0,0,10,101,1,0,0,0,12,107,1,0,0,0,14,
  	113,1,0,0,0,16,123,1,0,0,0,18,125,1,0,0,0,20,131,1,0,0,0,22,164,1,0,0,
  	0,24,172,1,0,0,0,26,174,1,0,0,0,28,179,1,0,0,0,30,194,1,0,0,0,32,203,
  	1,0,0,0,34,212,1,0,0,0,36,214,1,0,0,0,38,219,1,0,0,0,40,227,1,0,0,0,42,
  	235,1,0,0,0,44,254,1,0,0,0,46,256,1,0,0,0,48,258,1,0,0,0,50,260,1,0,0,
  	0,52,57,3,6,3,0,53,57,3,4,2,0,54,57,3,24,12,0,55,57,3,2,1,0,56,52,1,0,
  	0,0,56,53,1,0,0,0,56,54,1,0,0,0,56,55,1,0,0,0,57,60,1,0,0,0,58,56,1,0,
  	0,0,58,59,1,0,0,0,59,61,1,0,0,0,60,58,1,0,0,0,61,62,5,0,0,1,62,1,1,0,
  	0,0,63,67,5,92,0,0,64,66,9,0,0,0,65,64,1,0,0,0,66,69,1,0,0,0,67,65,1,
  	0,0,0,67,68,1,0,0,0,68,71,1,0,0,0,69,67,1,0,0,0,70,72,5,93,0,0,71,70,
  	1,0,0,0,71,72,1,0,0,0,72,3,1,0,0,0,73,74,5,43,0,0,74,75,5,67,0,0,75,84,
  	5,86,0,0,76,81,5,67,0,0,77,78,5,85,0,0,78,80,5,67,0,0,79,77,1,0,0,0,80,
  	83,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,84,
  	76,1,0,0,0,84,85,1,0,0,0,85,86,1,0,0,0,86,87,5,87,0,0,87,88,5,84,0,0,
  	88,5,1,0,0,0,89,94,3,8,4,0,90,94,3,10,5,0,91,94,3,12,6,0,92,94,3,20,10,
  	0,93,89,1,0,0,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,7,1,0,0,
  	0,95,96,5,13,0,0,96,97,5,67,0,0,97,98,5,73,0,0,98,99,3,38,19,0,99,100,
  	5,84,0,0,100,9,1,0,0,0,101,102,5,59,0,0,102,103,5,67,0,0,103,104,5,1,
  	0,0,104,105,3,14,7,0,105,106,5,84,0,0,106,11,1,0,0,0,107,108,5,55,0,0,
  	108,109,5,67,0,0,109,110,5,73,0,0,110,111,3,16,8,0,111,112,5,84,0,0,112,
  	13,1,0,0,0,113,114,5,67,0,0,114,15,1,0,0,0,115,116,5,8,0,0,116,117,5,
  	88,0,0,117,118,3,18,9,0,118,119,5,89,0,0,119,120,5,37,0,0,120,121,3,14,
  	7,0,121,124,1,0,0,0,122,124,3,18,9,0,123,115,1,0,0,0,123,122,1,0,0,0,
  	124,17,1,0,0,0,125,126,5,67,0,0,126,127,5,73,0,0,127,128,3,38,19,0,128,
  	129,5,65,0,0,129,130,3,38,19,0,130,19,1,0,0,0,131,132,5,25,0,0,132,133,
  	5,67,0,0,133,142,5,86,0,0,134,139,3,22,11,0,135,136,5,85,0,0,136,138,
  	3,22,11,0,137,135,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,
  	0,0,140,143,1,0,0,0,141,139,1,0,0,0,142,134,1,0,0,0,142,143,1,0,0,0,143,
  	144,1,0,0,0,144,145,5,87,0,0,145,146,5,1,0,0,146,147,3,14,7,0,147,151,
  	5,84,0,0,148,150,3,6,3,0,149,148,1,0,0,0,150,153,1,0,0,0,151,149,1,0,
  	0,0,151,152,1,0,0,0,152,154,1,0,0,0,153,151,1,0,0,0,154,158,5,10,0,0,
  	155,157,3,24,12,0,156,155,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,
  	159,1,0,0,0,159,161,1,0,0,0,160,158,1,0,0,0,161,162,5,21,0,0,162,163,
  	5,84,0,0,163,21,1,0,0,0,164,165,5,67,0,0,165,166,5,1,0,0,166,167,3,14,
  	7,0,167,23,1,0,0,0,168,173,3,26,13,0,169,173,3,28,14,0,170,173,3,30,15,
  	0,171,173,3,32,16,0,172,168,1,0,0,0,172,169,1,0,0,0,172,170,1,0,0,0,172,
  	171,1,0,0,0,173,25,1,0,0,0,174,175,3,34,17,0,175,176,5,72,0,0,176,177,
  	3,38,19,0,177,178,5,84,0,0,178,27,1,0,0,0,179,180,5,61,0,0,180,189,5,
  	86,0,0,181,186,3,38,19,0,182,183,5,85,0,0,183,185,3,38,19,0,184,182,1,
  	0,0,0,185,188,1,0,0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,190,1,0,0,0,
  	188,186,1,0,0,0,189,181,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,0,191,192,
  	5,87,0,0,192,193,5,84,0,0,193,29,1,0,0,0,194,195,5,24,0,0,195,196,5,67,
  	0,0,196,197,5,72,0,0,197,198,3,38,19,0,198,199,5,53,0,0,199,200,3,38,
  	19,0,200,201,5,18,0,0,201,202,3,24,12,0,202,31,1,0,0,0,203,207,5,10,0,
  	0,204,206,3,24,12,0,205,204,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,
  	208,1,0,0,0,208,210,1,0,0,0,209,207,1,0,0,0,210,211,5,21,0,0,211,33,1,
  	0,0,0,212,213,5,67,0,0,213,35,1,0,0,0,214,215,3,34,17,0,215,216,5,88,
  	0,0,216,217,3,38,19,0,217,218,5,89,0,0,218,37,1,0,0,0,219,224,3,40,20,
  	0,220,221,7,0,0,0,221,223,3,40,20,0,222,220,1,0,0,0,223,226,1,0,0,0,224,
  	222,1,0,0,0,224,225,1,0,0,0,225,39,1,0,0,0,226,224,1,0,0,0,227,232,3,
  	42,21,0,228,229,7,1,0,0,229,231,3,42,21,0,230,228,1,0,0,0,231,234,1,0,
  	0,0,232,230,1,0,0,0,232,233,1,0,0,0,233,41,1,0,0,0,234,232,1,0,0,0,235,
  	240,3,44,22,0,236,237,7,2,0,0,237,239,3,44,22,0,238,236,1,0,0,0,239,242,
  	1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,241,43,1,0,0,0,242,240,1,0,0,
  	0,243,244,5,35,0,0,244,255,3,44,22,0,245,246,5,86,0,0,246,247,3,38,19,
  	0,247,248,5,87,0,0,248,255,1,0,0,0,249,255,3,36,18,0,250,255,3,46,23,
  	0,251,255,3,48,24,0,252,255,3,50,25,0,253,255,3,34,17,0,254,243,1,0,0,
  	0,254,245,1,0,0,0,254,249,1,0,0,0,254,250,1,0,0,0,254,251,1,0,0,0,254,
  	252,1,0,0,0,254,253,1,0,0,0,255,45,1,0,0,0,256,257,7,3,0,0,257,47,1,0,
  	0,0,258,259,5,50,0,0,259,49,1,0,0,0,260,261,5,51,0,0,261,51,1,0,0,0,20,
  	56,58,67,71,81,84,93,123,139,142,151,158,172,186,189,207,224,232,240,
  	254
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
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2918341354679444480) != 0) || _la == ExprParser::IDENTIFIER

    || _la == ExprParser::LCOMMENT) {
      setState(56);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ExprParser::CONST:
        case ExprParser::FUNCTION:
        case ExprParser::TYPE:
        case ExprParser::VAR: {
          setState(52);
          declaration();
          break;
        }

        case ExprParser::PROGRAM: {
          setState(53);
          programDeclaration();
          break;
        }

        case ExprParser::BEGIN:
        case ExprParser::FOR:
        case ExprParser::WRITELN:
        case ExprParser::IDENTIFIER: {
          setState(54);
          statement();
          break;
        }

        case ExprParser::LCOMMENT: {
          setState(55);
          comment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
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
    setState(63);
    match(ExprParser::LCOMMENT);
    setState(67);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(64);
        matchWildcard(); 
      }
      setState(69);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::RCOMMENT) {
      setState(70);
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
    setState(73);
    match(ExprParser::PROGRAM);
    setState(74);
    match(ExprParser::IDENTIFIER);
    setState(75);
    match(ExprParser::LPAREN);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::IDENTIFIER) {
      setState(76);
      match(ExprParser::IDENTIFIER);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(77);
        match(ExprParser::COMMA);
        setState(78);
        match(ExprParser::IDENTIFIER);
        setState(83);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(86);
    match(ExprParser::RPAREN);
    setState(87);
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
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        constDeclaration();
        break;
      }

      case ExprParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(90);
        varDeclaration();
        break;
      }

      case ExprParser::TYPE: {
        enterOuterAlt(_localctx, 3);
        setState(91);
        typeDefDeclaration();
        break;
      }

      case ExprParser::FUNCTION: {
        enterOuterAlt(_localctx, 4);
        setState(92);
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

tree::TerminalNode* ExprParser::ConstDeclarationContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

ExprParser::ExpressionContext* ExprParser::ConstDeclarationContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
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
    setState(95);
    match(ExprParser::CONST);
    setState(96);
    match(ExprParser::IDENTIFIER);
    setState(97);
    match(ExprParser::EQUAL);
    setState(98);
    expression();
    setState(99);
    match(ExprParser::SEMICOLON);
   
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

tree::TerminalNode* ExprParser::VarDeclarationContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::VarDeclarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::VarDeclarationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* ExprParser::VarDeclarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
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
  enterRule(_localctx, 10, ExprParser::RuleVarDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(ExprParser::VAR);
    setState(102);
    match(ExprParser::IDENTIFIER);
    setState(103);
    match(ExprParser::COLON);
    setState(104);
    typeIdentifier();
    setState(105);
    match(ExprParser::SEMICOLON);
   
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

tree::TerminalNode* ExprParser::TypeDefDeclarationContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::TypeDefDeclarationContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

ExprParser::TypeSpecificationContext* ExprParser::TypeDefDeclarationContext::typeSpecification() {
  return getRuleContext<ExprParser::TypeSpecificationContext>(0);
}

tree::TerminalNode* ExprParser::TypeDefDeclarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
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
  enterRule(_localctx, 12, ExprParser::RuleTypeDefDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(ExprParser::TYPE);
    setState(108);
    match(ExprParser::IDENTIFIER);
    setState(109);
    match(ExprParser::EQUAL);
    setState(110);
    typeSpecification();
    setState(111);
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
  enterRule(_localctx, 14, ExprParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
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

tree::TerminalNode* ExprParser::TypeSpecificationContext::ARRAY() {
  return getToken(ExprParser::ARRAY, 0);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::LBRACKET() {
  return getToken(ExprParser::LBRACKET, 0);
}

ExprParser::SubrangeContext* ExprParser::TypeSpecificationContext::subrange() {
  return getRuleContext<ExprParser::SubrangeContext>(0);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::RBRACKET() {
  return getToken(ExprParser::RBRACKET, 0);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::OF() {
  return getToken(ExprParser::OF, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::TypeSpecificationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
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
  enterRule(_localctx, 16, ExprParser::RuleTypeSpecification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::ARRAY: {
        enterOuterAlt(_localctx, 1);
        setState(115);
        match(ExprParser::ARRAY);
        setState(116);
        match(ExprParser::LBRACKET);
        setState(117);
        subrange();
        setState(118);
        match(ExprParser::RBRACKET);
        setState(119);
        match(ExprParser::OF);
        setState(120);
        typeIdentifier();
        break;
      }

      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(122);
        subrange();
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

//----------------- SubrangeContext ------------------------------------------------------------------

ExprParser::SubrangeContext::SubrangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SubrangeContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::SubrangeContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
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
  enterRule(_localctx, 18, ExprParser::RuleSubrange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(ExprParser::IDENTIFIER);
    setState(126);
    match(ExprParser::EQUAL);
    setState(127);
    expression();
    setState(128);
    match(ExprParser::RANGE);
    setState(129);
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
  enterRule(_localctx, 20, ExprParser::RuleFunctionDeclaration);
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
    setState(131);
    match(ExprParser::FUNCTION);
    setState(132);
    match(ExprParser::IDENTIFIER);
    setState(133);
    match(ExprParser::LPAREN);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::IDENTIFIER) {
      setState(134);
      paramDeclaration();
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(135);
        match(ExprParser::COMMA);
        setState(136);
        paramDeclaration();
        setState(141);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(144);
    match(ExprParser::RPAREN);
    setState(145);
    match(ExprParser::COLON);
    setState(146);
    typeIdentifier();
    setState(147);
    match(ExprParser::SEMICOLON);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 612489549355950080) != 0)) {
      setState(148);
      declaration();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(ExprParser::BEGIN);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & 146366987889557505) != 0)) {
      setState(155);
      statement();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(ExprParser::END);
    setState(162);
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
  enterRule(_localctx, 22, ExprParser::RuleParamDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(ExprParser::IDENTIFIER);
    setState(165);
    match(ExprParser::COLON);
    setState(166);
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
  enterRule(_localctx, 24, ExprParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(168);
        assignment();
        break;
      }

      case ExprParser::WRITELN: {
        enterOuterAlt(_localctx, 2);
        setState(169);
        writeln();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(170);
        forStatement();
        break;
      }

      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 4);
        setState(171);
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
  enterRule(_localctx, 26, ExprParser::RuleAssignment);

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
    variable();
    setState(175);
    match(ExprParser::ASSIGN);
    setState(176);
    expression();
    setState(177);
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
  enterRule(_localctx, 28, ExprParser::RuleWriteln);
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
    setState(179);
    match(ExprParser::WRITELN);
    setState(180);
    match(ExprParser::LPAREN);
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 35) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 35)) & 2251806793105409) != 0)) {
      setState(181);
      expression();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(182);
        match(ExprParser::COMMA);
        setState(183);
        expression();
        setState(188);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(191);
    match(ExprParser::RPAREN);
    setState(192);
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
  enterRule(_localctx, 30, ExprParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(ExprParser::FOR);
    setState(195);
    match(ExprParser::IDENTIFIER);
    setState(196);
    match(ExprParser::ASSIGN);
    setState(197);
    expression();
    setState(198);
    match(ExprParser::TO);
    setState(199);
    expression();
    setState(200);
    match(ExprParser::DO);
    setState(201);
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
  enterRule(_localctx, 32, ExprParser::RuleCompoundStatement);
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
    setState(203);
    match(ExprParser::BEGIN);
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & 146366987889557505) != 0)) {
      setState(204);
      statement();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(210);
    match(ExprParser::END);
   
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
  enterRule(_localctx, 34, ExprParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
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

tree::TerminalNode* ExprParser::ArrayIndexingContext::LBRACKET() {
  return getToken(ExprParser::LBRACKET, 0);
}

ExprParser::ExpressionContext* ExprParser::ArrayIndexingContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::RBRACKET() {
  return getToken(ExprParser::RBRACKET, 0);
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
  enterRule(_localctx, 36, ExprParser::RuleArrayIndexing);

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
    variable();
    setState(215);
    match(ExprParser::LBRACKET);
    setState(216);
    expression();
    setState(217);
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
  enterRule(_localctx, 38, ExprParser::RuleExpression);
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
    setState(219);
    simpleExpression();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 63) != 0)) {
      setState(220);
      _la = _input->LA(1);
      if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & 63) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(221);
      simpleExpression();
      setState(226);
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
  enterRule(_localctx, 40, ExprParser::RuleSimpleExpression);
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
    setState(227);
    term();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(228);
      _la = _input->LA(1);
      if (!(_la == ExprParser::PLUSOP

      || _la == ExprParser::MINUSOP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(229);
      term();
      setState(234);
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
  enterRule(_localctx, 42, ExprParser::RuleTerm);
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
    setState(235);
    factor();
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & 412316860417) != 0)) {
      setState(236);
      _la = _input->LA(1);
      if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 33)) & 412316860417) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(237);
      factor();
      setState(242);
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
  enterRule(_localctx, 44, ExprParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(243);
      match(ExprParser::NOT);
      setState(244);
      factor();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(245);
      match(ExprParser::LPAREN);
      setState(246);
      expression();
      setState(247);
      match(ExprParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(249);
      arrayIndexing();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(250);
      number();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(251);
      characterConstant();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(252);
      stringConstant();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(253);
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
  enterRule(_localctx, 46, ExprParser::RuleNumber);
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
    setState(256);
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
  enterRule(_localctx, 48, ExprParser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
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
  enterRule(_localctx, 50, ExprParser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
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
