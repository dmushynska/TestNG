#include "IntersectArray.h"
    // fills vectors (intersection of two bigger and all arrays)
    IntersectArray::IntersectArray(const std::string &filename) : ArrayTransformer(filename) {}
    void IntersectArray::Operation() {
        MergeSort(m_v1.begin(), m_v1.end(), false);
        MergeSort(m_v2.begin(), m_v2.end(), false);
        MergeSort(m_v3.begin(), m_v3.end(), false);
        if (m_v1.size() > m_v3.size() && m_v2.size() > m_v3.size()) {
            m_intersectionOfTwo = Intersection(m_v1.begin(), m_v1.end(), m_v2.begin(), m_v2.end());
            m_intersectionOfTree = Intersection(m_intersectionOfTwo.begin(), m_intersectionOfTwo.end(), m_v3.begin(), m_v3.end());
        } else if (m_v1.size() > m_v2.size() && m_v3.size() > m_v2.size()) {
            m_intersectionOfTwo = Intersection(m_v1.begin(), m_v1.end(), m_v3.begin(), m_v3.end());
            m_intersectionOfTree = Intersection(m_intersectionOfTwo.begin(), m_intersectionOfTwo.end(), m_v2.begin(), m_v2.end());
        } else {
            m_intersectionOfTwo = Intersection(m_v3.begin(), m_v3.end(), m_v2.begin(), m_v2.end());
            m_intersectionOfTree = Intersection(m_intersectionOfTwo.begin(), m_intersectionOfTwo.end(), m_v1.begin(), m_v1.end());
        }
    }

    std::vector<int> IntersectArray::GetIntersectionOfTwoArray() {
        return m_intersectionOfTwo;
    }

    std::vector<int> IntersectArray::GetIntersectionOfTreeArray() {
        return m_intersectionOfTree;
    }

    void IntersectArray::PrintIntersectionOfTwoArray() {
        std::cout << "IntersectionOfTwoArray: ";
        outputContainer(m_intersectionOfTwo);
    }

    void IntersectArray::PrintIntersectionOfTreeArray() {
        std::cout << "IntersectionOfTreeArray: ";
        outputContainer(m_intersectionOfTree);
    }