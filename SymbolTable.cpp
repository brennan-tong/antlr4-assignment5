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
    SymbolTableEntry entry = {identifier, IdentifierKind::CONSTANT, value}; // Set the value field
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

// SymbolTable.cpp
void SymbolTable::print(std::ostream &os) const {

    int scopeLevel = 0;
    std::stack<std::unordered_map<std::string, SymbolTableEntry>> tempScopes = scopes;
    os << "Number of scopes: " << tempScopes.size() << std::endl;

    while (!tempScopes.empty()) {
    	os << "In While Loop";

        const auto& scope = tempScopes.top();
        os << "Scope Level: " << scopeLevel << std::endl;
        for (const auto& entry : scope) {
            os << "Identifier name: " << entry.first << std::endl;
            os << "Identifier kind: ";

            switch (entry.second.kind) {
                case IdentifierKind::VARIABLE:
                    os << "variable";
                    break;
                case IdentifierKind::CONSTANT:
                    os << "constant";
                    os << "\nValue: " << std::any_cast<double>(entry.second.value); // Print the constant value
                    break;
                case IdentifierKind::TYPEDEF:
                    os << "typedef";
                    break;
                case IdentifierKind::FUNCTION:
                    os << "function";
                    break;
            }
            os << std::endl << std::endl;
        }
        tempScopes.pop();
        ++scopeLevel;
    }
}


