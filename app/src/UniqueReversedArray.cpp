#include "UniqueReversedArray.h"
#include <algorithm>
    // fills unique reversed array values from all arrays
    UniqueReversedArray::UniqueReversedArray(const std::string &filename) : ArrayTransformer(filename) {}
    void UniqueReversedArray::Operation() {
        m_uniqueReversed.insert(m_uniqueReversed.begin(), m_v1.begin(), m_v1.end());
        m_uniqueReversed.insert(m_uniqueReversed.end(), m_v2.begin(), m_v2.end());
        m_uniqueReversed.insert(m_uniqueReversed.end(), m_v3.begin(), m_v3.end());

        MergeSort(m_uniqueReversed.begin(), m_uniqueReversed.end(), true);
        std::vector<int>::iterator it = std::unique(m_uniqueReversed.begin(), m_uniqueReversed.end());
        m_uniqueReversed.resize(std::distance(m_uniqueReversed.begin(), it));
    }

    std::vector<int> UniqueReversedArray::GetUniqueReservedArray() {
        return m_uniqueReversed;
    }

    void UniqueReversedArray::PrintUniqueReservedArray() {
        std::cout << "UniqueReservedArray: ";
        outputContainer(m_uniqueReversed);
    }