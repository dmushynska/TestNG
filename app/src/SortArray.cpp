#include "SortArray.h"

    SortArray::SortArray(const std::string &filename) : ArrayTransformer(filename) {}

    // sorts arrays using mergesort
    void SortArray::Operation() {
        MergeSort(m_v1.begin(), m_v1.end(), false);
        MergeSort(m_v2.begin(), m_v2.end(), false);
        MergeSort(m_v3.begin(), m_v3.end(), false);
    }

    void SortArray::PrintSort() {
        std::cout << "SortArray 1: ";
        outputContainer(m_v1);
        std::cout << "SortArray 2: ";
        outputContainer(m_v2);
        std::cout << "SortArray 3: ";
        outputContainer(m_v3);
    }