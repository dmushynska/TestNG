#include "IntersectArray.h"

    IntersectArray::IntersectArray() : ArrayTransformer("") {}
    void IntersectArray::Operation() {
        m_intersectionOfTwo = Intersection(m_v1.begin(), m_v1.end(), m_v2.begin(), m_v2.end());
        m_intersectionOfTree = Intersection(m_intersectionOfTwo.begin(), m_intersectionOfTwo.end(), m_v3.begin(), m_v3.end());
    }
    std::vector<int> IntersectArray::GetIntersectionOfTwoArray() {
        return m_intersectionOfTwo;
    }
    std::vector<int> IntersectArray::GetIntersectionOfTreeArray() {
        return m_intersectionOfTree;
    }
    void IntersectArray::PrintIntersectionOfTwoArray() {
        std::cout << "Array 2: ";
        outputContainer(m_intersectionOfTwo);
    }
    void IntersectArray::PrintIntersectionOfTreeArray() {
        std::cout << "Array 3: ";
        outputContainer(m_intersectionOfTree);
    }