#include "SymbolTable.h"
#include <string>
#include <iomanip>
#include <map>


SymbolTable::SymbolTable() {}

void SymbolTable::pushScope() {
    scopes.push(std::map<std::string, SymbolTableEntry>());
    orderedIdentifiers.push(std::vector<std::string>());
}

void SymbolTable::popScope() {
    if (!scopes.empty()) {
        scopes.pop();
    }
    if (!orderedIdentifiers.empty()) {
        orderedIdentifiers.pop();
    }
}

void SymbolTable::addConstant(const std::string &identifier, const antlrcpp::Any &value) {
    SymbolTableEntry entry = {identifier, IdentifierKind::CONSTANT};
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

void SymbolTable::addVariable(const std::string &identifier, const std::string &type) {
    SymbolTableEntry entry = {identifier, IdentifierKind::VARIABLE};
    entry.type = type;
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

void SymbolTable::addTypedef(const std::string &identifier, const std::string &typeDef) {
    SymbolTableEntry entry = {identifier, IdentifierKind::TYPEDEF};
    entry.type = typeDef;
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

void SymbolTable::addFunction(const std::string &identifier, const std::string &returnType) {
    SymbolTableEntry entry = {identifier, IdentifierKind::FUNCTION};
    entry.type = returnType;
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

bool SymbolTable::isDeclaredInCurrentScope(const std::string &identifier) const {
    return scopes.top().find(identifier) != scopes.top().end();
}

void SymbolTable::addProgram(const std::string &identifier) {
    SymbolTableEntry entry = {identifier, IdentifierKind::PROGRAM};
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

bool SymbolTable::isDeclared(const std::string& identifier) const {
    for (auto it = scopes.top().cbegin(); it != scopes.top().cend(); ++it) {
        if (it->first == identifier) {
            return true;
        }
    }
    return false;
}


void SymbolTable::print(std::ostream &os) const {
    int scopeLevel = 0;
    std::stack<std::map<std::string, SymbolTableEntry>> tempScopes = scopes;
    std::stack<std::vector<std::string>> tempOrderedIdentifiers = orderedIdentifiers;

    os << "Number of scopes: " << tempScopes.size() << std::endl;

    while (!tempScopes.empty()) {
        const auto& scope = tempScopes.top();
        const auto& ordered = tempOrderedIdentifiers.top();

        std::vector<IdentifierKind> kinds = {IdentifierKind::PROGRAM, IdentifierKind::CONSTANT, IdentifierKind::TYPEDEF, IdentifierKind::VARIABLE, IdentifierKind::FUNCTION};

        std::string currentScopeName;
        if (scopeLevel == 0) {
            currentScopeName = "Global";
        } else {
            for (const auto& identifier : ordered) {
                const auto& entry = scope.at(identifier);
                if (entry.kind == IdentifierKind::FUNCTION) {
                    currentScopeName = entry.identifier;
                    break;
                }
            }
        }

        for (const auto& kind : kinds) {
            for (const auto& identifier : ordered) {
                const auto& entry = scope.at(identifier);

                if (entry.kind == kind) {
                    os << "Scope: " << currentScopeName << std::endl;
                    os << "Identifier name: " << entry.identifier << std::endl;
                    os << "Identifier kind: ";

                    switch (entry.kind) {
                        case IdentifierKind::VARIABLE:
                            os << "variable";
                            break;
                        case IdentifierKind::CONSTANT:
                            os << "constant";
                            break;
                        case IdentifierKind::TYPEDEF:
                            os << "typedef";
                            if (!entry.type.empty()) {
                                os << std::endl << "Type: " << entry.type;
                            }
                            break;
                        case IdentifierKind::FUNCTION:
                            os << "function";
                            if (!entry.type.empty()) {
                                os << std::endl << "Return type: " << entry.type;
                            }
                            break;
                        case IdentifierKind::PROGRAM:
                            os << "program";
                            break;
                    }
                    os << std::endl << std::endl;
                }
            }
        }

        tempScopes.pop();
        tempOrderedIdentifiers.pop();
        ++scopeLevel;
    }
}
