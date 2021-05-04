#pragma once
#include <vector>
#include <iterator>
#include <iostream>
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
