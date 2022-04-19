#pragma once


template <class SomeType>
void shiftLeft(SomeType arr[], const int n, int number)
{
	for (int i = 0; i < number; i++)
	{
		SomeType buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

template <class SomeType>
void shiftRight(SomeType arr[], const int n, int number)
{
	for (int i = 0; i < number * 2; i++)
	{
		SomeType buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
