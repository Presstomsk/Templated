#pragma once

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);

template <typename T> void Print(T arr[], const int n);
template <typename T> void Print(T arr[ROWS][COLS], const int m, const int n);

template <typename T> void Sort(T arr[], const int n);
template <typename T> void Sort(T arr[ROWS][COLS], const int m, const int n);

template <typename T> T Sum(T arr[], const int n);
template <typename T> T Sum(T arr[ROWS][COLS], const int m, const int n);

template <typename T> double Avg(T arr[], const int n);
template <typename T> double Avg(T arr[ROWS][COLS], const int m, const int n);

template <typename T> T minValueIn(T arr[], const int n);
template <typename T> T minValueIn(T arr[ROWS][COLS], const int m, const int n);

template <typename T> T maxValueIn(T arr[], const int n);
template <typename T> T maxValueIn(T arr[ROWS][COLS], const int m, const int n);