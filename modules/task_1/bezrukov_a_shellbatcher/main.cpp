// Copyright 2023 Bezrukov Aleksandr
#include <gtest/gtest.h>
#include "./shellbatcher.h"

TEST(Shellbatcher_seq, Test1_empty_array) {
    int size = 0;
    std::vector<int> vec(size);

    ShellsortSeq(vec.data(), size);

    EXPECT_EQ(vec.size(), 0);
}

TEST(Shellbatcher_seq, Test2_array_1el) {
    int size = 1;
    std::vector<int> vec({ 0 });

    ShellsortSeq(vec.data(), size);

    EXPECT_EQ(vec.size(), 1);
    EXPECT_EQ(vec[0], 0);
}

TEST(Shellbatcher_seq, Test3_array_2els) {
    int size = 2;
    std::vector<int> vec({ 2, 1 });
    std::vector<int> rightVec({ 1, 2 });

    ShellsortSeq(vec.data(), size);

    EXPECT_EQ(vec, rightVec);
}

TEST(Shellbatcher_seq, Test4_randarray_10els) {
    int size = 10;
    std::vector<int> vec = RandVec_Gen(size);
    std::vector<int> rightVec(vec);

    ShellsortSeq(vec.data(), size);
    std::sort(rightVec.begin(), rightVec.end());

    EXPECT_EQ(vec, rightVec);
}

TEST(Shellbatcher_seq, Test4_randarray_1001els) {
    int size = 1001;
    std::vector<int> vec = RandVec_Gen(size);
    std::vector<int> rightVec(vec);

    ShellsortSeq(vec.data(), size);
    std::sort(rightVec.begin(), rightVec.end());

    EXPECT_EQ(vec, rightVec);
}

TEST(Shellbatcher_seq, Test6_sortedarray_300Elements) {
    int size = 300;
    std::vector<int> vec = SortedVec_Gen(size);
    std::vector<int> rightVec(vec);

    ShellsortSeq(vec.data(), size);

    EXPECT_EQ(vec, rightVec);
}

TEST(Shellbatcher_seq, Test6_rsortedarray_200els) {
    int size = 200;
    std::vector<int> vec = ReversedVec_Gen(size);
    std::vector<int> rightVec(vec);

    ShellsortSeq(vec.data(), size);
    std::reverse(rightVec.begin(), rightVec.end());

    EXPECT_EQ(vec, rightVec);
}

/*  TEST(Shellbatcher_seq, Test4_randarray_1000000els) {
    int size = 1000000;
    std::vector<int> vec = RandVec_Gen(size);
    std::vector<int> rightVec(vec);

    ShellsortSeq(vec.data(), size);
    std::sort(rightVec.begin(), rightVec.end());

    EXPECT_EQ(vec, rightVec);
} */
