#pragma once

#include "ArrayTransformer.h"
class PrintArray : public ArrayTransformer {
public:
    PrintArray(const std::string &filename);
    PrintArray() = delete;
    ~PrintArray() = default;
    void Operation() override;
};
