#pragma once
#include "ArrayTransformer.h"

class SortArray : public ArrayTransformer {
public:
    SortArray(const std::string &filename);
    SortArray() = delete;
    ~SortArray() = default;
    void Operation() override;
    void PrintSort();
};