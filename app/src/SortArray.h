#pragma once
#include "ArrayTransformer.h"

class SortArray : public ArrayTransformer {
public:
    SortArray();
    ~SortArray() = default;
    void Operation() override;
};