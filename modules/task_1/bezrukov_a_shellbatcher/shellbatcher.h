// Copyright 2023 Bezrukov Aleksandr
#ifndef MODULES_TASK_1_BEZRUKOV_A_SHELLBATCHER_SHELLBATCHER_H_
#define MODULES_TASK_1_BEZRUKOV_A_SHELLBATCHER_SHELLBATCHER_H_
#include <random>
#include <iostream>
#include <vector>
#include <algorithm>

void VecPrint(std::vector<int> vec);

std::vector<int> RandVec_Gen(int length);
std::vector<int> SortedVec_Gen(int size);
std::vector<int> ReversedVec_Gen(int length);

void ShellsortSeq(int* array, int n);

#endif  // MODULES_TASK_1_BEZRUKOV_A_SHELLBATCHER_SHELLBATCHER_H_
