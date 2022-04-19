#pragma once

#include"Constants.h"

template <class SomeType>
SomeType Sum(SomeType arr[], const int n);
int Sum(char arr[], const int n);

template <class SomeType>
double Avg(SomeType arr[], const int n);

template <class SomeType>
SomeType MinValue(SomeType arr[], const int n);
int MinValue(char arr[], const int n);

template <class SomeType>
SomeType MaxValue(SomeType arr[], const int n);
int MaxValue(char arr[], const int n);

template <class SomeType>
SomeType Sum(SomeType arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <class SomeType>
double Avg(SomeType arr[ROWS][COLS], const int ROWS, const int COLS);

template <class SomeType>
SomeType MinValue(SomeType arr[ROWS][COLS], const int ROWS, const int COLS);
int MinValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <class SomeType>
SomeType MaxValue(SomeType arr[ROWS][COLS], const int ROWS, const int COLS);
int MaxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);
