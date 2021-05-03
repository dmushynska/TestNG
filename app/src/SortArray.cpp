#include "SortArray.h"

    SortArray::SortArray() : ArrayTransformer("") {}

    void SortArray::Operation() {
        MergeSort(m_v1.begin(), m_v1.end());
        MergeSort(m_v2.begin(), m_v2.end());
        MergeSort(m_v3.begin(), m_v3.end());
    }