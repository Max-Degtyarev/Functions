
#include"stdafx.h"
#include"Constants.h"

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand() % (maxRand * 100 - minRand * 100) + minRand * 100) * 0.01;
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (rand() % (maxRand * 100 - minRand * 100) + minRand * 100) * 0.01;
		}
	}
}
