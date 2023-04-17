#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <any>
#include <antlr4-runtime.h>
#include <unordered_map>
#include <string>
#include <stack>

enum class IdentifierKind { VARIABLE, CONSTANT, TYPEDEF, FUNCTION };

struct SymbolTableEntry {
    std::string identifier;
    IdentifierKind kind;
};

using Typedef = std::string;

class SymbolTable {
public:
    SymbolTable();

    void pushScope();
    void popScope();

    void addConstant(const std::string &identifier, const antlrcpp::Any &value);
    void addVariable(const std::string &identifier, const std::string &type);
    void addTypedef(const std::string &identifier, const Typedef &typeDef);
    void addFunction(const std::string &identifier, const std::string &returnType);

    bool isDeclaredInCurrentScope(const std::string &identifier) const;
    void print() const;

private:
    std::stack<std::unordered_map<std::string, SymbolTableEntry>> scopes;
};

#endif // SYMBOL_TABLE_H
