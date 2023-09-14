// Copyright 2023 Bezrukov Aleksandr
#include "../../../modules/task_1/bezrukov_a_shellbatcher/shellbatcher.h"

void VecPrint(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
}

std::vector<int> RandVec_Gen(int size) {
    std::random_device randDev;
    std::mt19937 engine(randDev());
    std::uniform_int_distribution<> distrib(0, 1000);
    std::vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        vec[i] = distrib(engine);
    }
    return vec;
}

std::vector<int> SortedVec_Gen(int size) {
    std::vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        vec[i] = i;
    }
    return vec;
}

std::vector<int> ReversedVec_Gen(int size) {
    std::vector<int> vec(size);
    for (int i = size - 1; i <= 0; i--) {
        vec[i] = i;
    }
    return vec;
}

void ShellsortSeq(int* array, int size) {
    for (int interval = size / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < size; i += 1) {
            int temp = array[i];
            int j;
            for (j = i; j >= interval && array[j - interval] > temp;
                j -= interval) {
                array[j] = array[j - interval];
            }
            array[j] = temp;
        }
    }
}
