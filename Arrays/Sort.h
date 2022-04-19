#pragma once

#include"Constants.h"

template <class SomeType>
void Sort(SomeType arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				SomeType buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <class SomeType>
void Sort(SomeType arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int r = (k == i ? j + 1 : 0); r < COLS; r++)
				{
					if (arr[k][r] < arr[i][j])
					{
						SomeType buffer = arr[i][j];
						arr[i][j] = arr[k][r];
						arr[k][r] = buffer;
					}
				}
			}
		}
	}
}
