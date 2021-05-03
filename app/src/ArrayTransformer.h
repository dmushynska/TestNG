#pragma once
#include <vector>
#include <string>
#include <iterator>
#include <iostream>
#include <fstream>
#include <regex>

template <typename RandomIt>
void MergeSort(RandomIt range_begin, RandomIt range_end, bool reverse) {
    int range_length = range_end - range_begin;
    if (range_length < 2) {
        return;
    }
    std::vector<typename RandomIt::value_type> elements(range_begin, range_end);
    auto mid = elements.begin() + range_length / 2;
    MergeSort(elements.begin(), mid, reverse);
    MergeSort(mid, elements.end(), reverse);
    if (reverse == false)
        merge(elements.begin(), mid, mid, elements.end(), range_begin);
    else
        merge(mid, elements.end(), elements.begin(), mid, range_begin,
            [](int a, int b) {
                return a > b ? true : false;
            });
}

template <typename Container>
void outputContainer(const Container& container) {
    std::ostream_iterator<typename Container::value_type> out_it(std::cout, " ");
    std::copy(container.begin(), container.end(), out_it);
    std::cout << "\n";
}

class ArrayTransformer {
public:
    ArrayTransformer(const std::string &filename);
    ArrayTransformer() = delete;
    virtual ~ArrayTransformer() {}
    virtual void Operation() = 0;
private:
protected:
    std::vector<int> m_v1;
    std::vector<int> m_v2;
    std::vector<int> m_v3;
};


