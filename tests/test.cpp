#include <cassert>
#include <gtest/gtest.h>
#include "Algorithm.h"
#include <random>

void RandomVector(std::vector<int> &v) {
    int r = rand() % 10 + 1;
    for (int i = 0; i < r; i++) {
        v.push_back(rand() % 25);
    }
}

TEST(Sort, RandSortAsc) {
    std::vector<int> v1;
    RandomVector(v1);
    std::vector<int> s1 = v1;
    std::sort(s1.begin(), s1.end());
    std::vector<int> v2;
    RandomVector(v2);
    std::vector<int> s2 = v2;
    std::sort(s2.begin(), s2.end());

    MergeSort(v1.begin(), v1.end(), false);
    MergeSort(v2.begin(), v2.end(), false);
    EXPECT_TRUE(v1 == s1);
    EXPECT_TRUE(v2 == s2);
}

TEST(Sort, RandSortDes) {
    std::vector<int> v1;
    RandomVector(v1);
    std::vector<int> s1 = v1;
    std::sort(s1.begin(), s1.end());
    std::reverse(s1.begin(), s1.end());
    std::vector<int> v2;
    RandomVector(v2);
    std::vector<int> s2 = v2;
    std::sort(s2.begin(), s2.end());
    std::reverse(s2.begin(), s2.end());

    MergeSort(v1.begin(), v1.end(), true);
    MergeSort(v2.begin(), v2.end(), true);
    EXPECT_TRUE(v1 == s1);
    EXPECT_TRUE(v2 == s2);
}

TEST(INTERSECT, True) {
    std::vector<int> v1 = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    std::vector<int> s1 = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    std::vector<int> result1 = {0, 1, 2, 3, 5, 6, 7, 8, 9};

    std::vector<int> v2 = {0, 11, 82, 32, 7, 93, 4, 5, 9};
    MergeSort(v2.begin(), v2.end(), false);
    std::vector<int> s2 = {0, 4, 7, 93, 5, 11, 7, 90, 9};
    std::vector<int> result2 = {0, 4, 5, 7, 9, 11, 93};
    MergeSort(s2.begin(), s2.end(), false);

    ASSERT_TRUE(Intersection(v1.begin(), v1.end(), s1.begin(), s1.end()) == result1);
    ASSERT_TRUE(Intersection(v2.begin(), v2.end(), s2.begin(), s2.end()) == result2);
}

TEST(INTERSECT, False) {
    std::vector<int> v1 = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    std::vector<int> s1 = {10, 11, 21, 13, 15, 16, 71, 81, 19};
    std::vector<int> result;

    ASSERT_TRUE(Intersection(v1.begin(), v1.end(), s1.begin(), s1.end()) == result);
}

int main(int argc, char** argv) {
    srand (time(NULL));
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}