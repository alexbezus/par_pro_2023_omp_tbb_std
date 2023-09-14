// Copyright 2023 Bezrukov Aleksandr
#include <gtest/gtest.h>
#include "./shellbatcher.h"

TEST(Shellbatcher_omp, Test1_empty) {
    std::size_t vecLength = 0;
    std::vector<int> emptyVec(vecLength);
    Shellsort_Parallel(&emptyVec);
    EXPECT_EQ(emptyVec.size(), 0);
}

TEST(Shellbatcher_omp, Test2_one) {
    std::size_t vecLength = 1;
    std::vector<int> oneElementVec({ 5 });
    Shellsort_Parallel(&oneElementVec);
    EXPECT_EQ(oneElementVec.size(), 1);
    EXPECT_EQ(oneElementVec[0], 5);
}

TEST(Shellbatcher_omp, Test3_random30) {
    std::size_t vecLength = 30;
    std::vector<int> vec = RandVec_Gen(vecLength);
    std::vector<int> rightAnswer(vec);
    std::sort(rightAnswer.begin(), rightAnswer.end());
    Shellsort_Parallel(&vec);
    EXPECT_EQ(vec, rightAnswer);
}

TEST(Shellbatcher_omp, Test4_random100) {
    std::size_t vecLength = 100;
    std::vector<int> vec = RandVec_Gen(vecLength);
    std::vector<int> rightAnswer(vec);
    std::sort(rightAnswer.begin(), rightAnswer.end());
    Shellsort_Parallel(&vec);
    EXPECT_EQ(vec, rightAnswer);
}

TEST(Shellbatcher_omp, Test5_random3000) {
    std::size_t vecLength = 3000;
    std::vector<int> vec = RandVec_Gen(vecLength);
    std::vector<int> rightAnswer(vec);
    std::sort(rightAnswer.begin(), rightAnswer.end());
    Shellsort_Parallel(&vec);
    EXPECT_EQ(vec, rightAnswer);
}

/* TEST(Shellbatcher_omp, Test6_random1000000) {
    std::size_t vecLength = 1000000;
    std::vector<int> vec = RandVec_Gen(vecLength);
    std::vector<int> rightAnswer(vec);

    double tSeq_1 = omp_get_wtime();
    std::sort(rightAnswer.begin(), rightAnswer.end());
    double tSeq_2 = omp_get_wtime();

    double tOmp_1 = omp_get_wtime();
    Shellsort_Parallel(&vec);
    double tOmp_2 = omp_get_wtime();

    std::cout << "std::sort time:    " << (tSeq_2 - tSeq_1) << "s\n";
    std::cout << "Shellbatcher time: " << (tOmp_2 - tOmp_1) << "s\n";

    EXPECT_EQ(vec, rightAnswer);
} */

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
