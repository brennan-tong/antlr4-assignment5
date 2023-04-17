#include "SymbolTable.h"

SymbolTable::SymbolTable() {}

void SymbolTable::pushScope() {
    scopes.push(std::unordered_map<std::string, SymbolTableEntry>());
}

void SymbolTable::popScope() {
    if (!scopes.empty()) {
        scopes.pop();
    }
}

void SymbolTable::addConstant(const std::string &identifier, const antlrcpp::Any &value) {
    SymbolTableEntry entry = {identifier, IdentifierKind::CONSTANT};
    scopes.top()[identifier] = entry;
}

void SymbolTable::addVariable(const std::string &identifier, const std::string &type) {
    SymbolTableEntry entry = {identifier, IdentifierKind::VARIABLE};
    scopes.top()[identifier] = entry;
}

void SymbolTable::addTypedef(const std::string &identifier, const Typedef &typeDef) {
    SymbolTableEntry entry = {identifier, IdentifierKind::TYPEDEF};
    scopes.top()[identifier] = entry;
}

void SymbolTable::addFunction(const std::string &identifier, const std::string &returnType) {
    SymbolTableEntry entry = {identifier, IdentifierKind::FUNCTION};
    scopes.top()[identifier] = entry;
}

bool SymbolTable::isDeclaredInCurrentScope(const std::string &identifier) const {
    return scopes.top().find(identifier) != scopes.top().end();
}

void SymbolTable::print() const {
    int scopeLevel = 0;
    std::stack<std::unordered_map<std::string, SymbolTableEntry>> tempScopes = scopes;
    while (!tempScopes.empty()) {
        const auto& scope = tempScopes.top();
        std::cout << "Scope Level: " << scopeLevel << std::endl;
        for (const auto& entry : scope) {
            std::cout << "Identifier name: " << entry.first << std::endl;
            std::cout << "Identifier kind: ";

            switch (entry.second.kind) {
                case IdentifierKind::VARIABLE:
                    std::cout << "variable";
                    break;
                case IdentifierKind::CONSTANT:
                    std::cout << "constant";
                    break;
                case IdentifierKind::TYPEDEF:
                    std::cout << "typedef";
                    break;
                case IdentifierKind::FUNCTION:
                    std::cout << "function";
                    break;
            }
            std::cout << std::endl << std::endl;
        }
        tempScopes.pop();
        ++scopeLevel;
    }
}

