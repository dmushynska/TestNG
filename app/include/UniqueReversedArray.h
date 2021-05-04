#pragma once
#include "ArrayTransformer.h"

class UniqueReversedArray : public ArrayTransformer {
public:
    UniqueReversedArray(const std::string &filename);
    UniqueReversedArray() = delete;
    ~UniqueReversedArray() = default;
    void Operation() override;
    std::vector<int> GetUniqueReservedArray();
    void PrintUniqueReservedArray();
private:
    std::vector<int> m_uniqueReversed;
};
