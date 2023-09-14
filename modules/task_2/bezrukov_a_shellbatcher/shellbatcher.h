// Copyright 2023 Bezrukov Aleksandr
#ifndef MODULES_TASK_2_BEZRUKOV_A_SHELLBATCHER_SHELLBATCHER_H_
#define MODULES_TASK_2_BEZRUKOV_A_SHELLBATCHER_SHELLBATCHER_H_
#include <omp.h>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <string>

const int FILLER = 1000000;

std::vector<int> RandVec_Gen(int length);
void Vec_Print(std::vector<int> vec);
void Vec_Print(int* vec, int n);
bool Is_2Power(int number);
bool What_2Power(int number);
void ShellsortSeq(int* vec, std::size_t n);
void Batcher_OddOrEvenMerge(int *partStartPtr, int partSize, bool isOdd);
void Batcher_ParallelMerge(int* vec, int partSize, int partsCount);
void Shellsort_Parallel(std::vector<int>* vecPtr);

#endif  // MODULES_TASK_2_BEZRUKOV_A_SHELLBATCHER_SHELLBATCHER_H_
