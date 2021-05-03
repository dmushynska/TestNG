#include "PrintArray.h"

    PrintArray::PrintArray(const std::string &filename) : ArrayTransformer(filename) {}

    void PrintArray::Operation() {
        std::cout << "Array 1: ";
        outputContainer(m_v1);
        std::cout << "Array 2: ";
        outputContainer(m_v2);
        std::cout << "Array 3: ";
        outputContainer(m_v3);
    }