#pragma once
#include "ArrayTransformer.h"

template <typename It>
std::vector<int> Intersection(It begin1, It end1, It begin2, It end2) {
    std::vector<int> result;
    while (begin1 != end1 && begin2 != end2) {
        if (*begin1 < *begin2) {
            begin1++;
        }
        else if (*begin2 < *begin1) {
            begin2++;
        }
        else {
            result.push_back(*begin1);
            begin1++;
            begin2++;
        }
    }
    return result;
}

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

