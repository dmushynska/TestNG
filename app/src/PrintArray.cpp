#include "PrintArray.h"

    PrintArray::PrintArray() : ArrayTransformer("") {}

    void PrintArray::Operation() {
        std::cout << "Array 1: ";
        outputContainer(m_v1);
        std::cout << "Array 2: ";
        outputContainer(m_v2);
        std::cout << "Array 3: ";
        outputContainer(m_v3);
    }