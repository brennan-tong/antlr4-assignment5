#include "TypedefStructure.h"

Typedef::Typedef(TypedefKind kind, const std::string &elementType, int elementCount)
    : kind(kind), elementType(elementType), elementCount(elementCount) {}

TypedefKind Typedef::getKind() const {
    return kind;
}

std::string Typedef::getElementType() const {
    return elementType;
}

int Typedef::getElementCount() const {
    return elementCount;
}
