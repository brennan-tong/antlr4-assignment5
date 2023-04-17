#include <iostream>
#include <fstream>
#include <string>
#include <antlr4-runtime.h>
#include "ExprLexer.h"
#include "ExprParser.h"
#include "MyExprVisitor.h"
#include "SymbolTable.h"

using namespace antlr4;

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

    tree::ParseTree* tree = parser.prog();
    MyExprVisitor visitor;
    visitor.visit(tree);

    // Output parse tree
    std::ofstream parseTreeOutput("test-out.txt");
    parseTreeOutput << tree->toStringTree(&parser) << std::endl;
    parseTreeOutput.close();

    // Output symbol tables and type definitions
    visitor.printSymbolTables();

    return 0;
}
