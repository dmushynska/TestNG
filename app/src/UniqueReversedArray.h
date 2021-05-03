#pragma once
#include "ArrayTransformer.h"

class UniqueReversedArray : public ArrayTransformer {
public:
    UniqueReversedArray();
    ~UniqueReversedArray() = default;
    void Operation() override;
    std::vector<int> GetUniqueReservedArray();
    void PrintUniqueReservedArray();
private:
    std::vector<int> m_uniqueReversed;
};
