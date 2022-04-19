

#include"Statistics.h"

template <class SomeType>
SomeType Sum(SomeType arr[], const int n)
{
	SomeType sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <class SomeType>
double Avg(SomeType arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template <class SomeType>
SomeType MinValue(SomeType arr[], const int n)
{
	SomeType minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}

template <class SomeType>
SomeType MaxValue(SomeType arr[], const int n)
{
	SomeType maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}

template <class SomeType>
SomeType Sum(SomeType arr[ROWS][COLS], const int ROWS, const int COLS)
{
	SomeType sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <class SomeType>
double Avg(SomeType arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <class SomeType>
SomeType MinValue(SomeType arr[ROWS][COLS], const int ROWS, const int COLS)
{
	SomeType minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	}
	return minValue;
}

template <class SomeType>
SomeType MaxValue(SomeType arr[ROWS][COLS], const int ROWS, const int COLS)
{
	SomeType maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue)maxValue = arr[i][j];
		}
	}
	return maxValue;
}
