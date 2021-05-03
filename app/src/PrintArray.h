#pragma once

#include "ArrayTransformer.h"
class PrintArray : public ArrayTransformer {
public:
    PrintArray();
    ~PrintArray() = default;
    void Operation() override;
};
