#pragma once
#include "ArrayTransformer.h"

class IntersectArray : public ArrayTransformer {
public:
    IntersectArray(const std::string &filename);
    IntersectArray() = delete;
    ~IntersectArray() = default;
    void Operation() override;
    std::vector<int> GetIntersectionOfTwoArray();
    std::vector<int> GetIntersectionOfTreeArray();
    void PrintIntersectionOfTwoArray();
    void PrintIntersectionOfTreeArray();
private:
    std::vector<int> m_intersectionOfTwo;
    std::vector<int> m_intersectionOfTree;
};

