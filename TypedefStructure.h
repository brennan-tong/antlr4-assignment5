#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <string>

enum class TypedefKind { SCALAR, ARRAY };

class Typedef {
public:
    Typedef(TypedefKind kind, const std::string &elementType, int elementCount = 0);

    TypedefKind getKind() const;
    std::string getElementType() const;
    int getElementCount() const;

private:
    TypedefKind kind;
    std::string elementType;
    int elementCount;
};

#endif // TYPEDEF_H
