#pragma once

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 10;

template <typename T1, typename T2> void FillRand(T1 arr[], const T2 n);
template <typename T1, typename T2> void FillRand(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> void Print(T1 arr[], const T2 n);
template <typename T1, typename T2> void Print(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> void Sort(T1 arr[], const T2 n);
template <typename T1, typename T2> void Sort(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> T1 Sum(T1 arr[], const T2 n);
template <typename T1, typename T2> T1 Sum(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> double Avg(T1 arr[], const T2 n);
template <typename T1, typename T2> double Avg(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> T1 minValueIn(T1 arr[], const T2 n);
template <typename T1, typename T2> T1 minValueIn(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> T1 maxValueIn(T1 arr[], const T2 n);
template <typename T1, typename T2> T1 maxValueIn(T1 arr[ROWS][COLS], const T2 m, const T2 n);