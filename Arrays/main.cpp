#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------\n"

const int ROWS = 3;
const int COLS = 4;


template <class SomeType>
void FillRand(SomeType arr[], const int n, int minRand = 0, int maxRand = 100)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

template <class SomeType>
void Print(SomeType arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

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
int Sum(char arr[], const int n);

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
int MinValue(char arr[], const int n);

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
int MaxValue(char arr[], const int n);

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

template <class SomeType>
void FillRand(SomeType arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (rand() % (maxRand * 100 - minRand * 100) + minRand * 100) * 0.01;
		}
	}
}

template <class SomeType>
void Print(SomeType arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
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
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

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
int MinValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

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
int MaxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

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

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива " << MinValue(arr, n) << endl;
	cout << "Максимальное значение массива " << MaxValue(arr, n) << endl;
	Sort(arr, n);
	cout << "Сортировка массива" << endl;
	Print(arr, n);
	int number;
	cout << "Введите количество сдвигов : "; cin >> number;
	shiftLeft(arr, n, number);
	cout << "Массив со сдвигом влево " << endl;
	Print(arr, n);
	shiftRight(arr, n, number);
	cout << "Массив со сдвигом вправо " << endl;
	Print(arr, n);
	
	cout << delimiter << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Сумма элементов массива " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(brr, m) << endl;
	cout << "Минимальное значение массива " << MinValue(brr, m) << endl;
	cout << "Максимальное значение массива " << MaxValue(brr, m) << endl;
	Sort(brr, m);
	cout << "Сортировка массива" << endl;
	Print(brr, m);
	int number2;
	cout << "Введите количество сдвигов : "; cin >> number2;
	shiftLeft(brr, m, number2);
	cout << "Массив со сдвигом влево " << endl;
	Print(brr, m);
	shiftRight(brr, m, number2);
	cout << "Массив со сдвигом вправо " << endl;
	Print(brr, m);
	
	cout << delimiter << endl;
	
	const int t = 10;
	char crr[t];
	FillRand(crr, t, 40, 60);
	Print(crr, t);
	cout << "Сумма элементов массива " << Sum(crr, t) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(crr, t) << endl;
	cout << "Минимальное значение массива " << MinValue(crr, t) << endl;
	cout << "Максимальное значение массива " << MaxValue(crr, t) << endl;
	Sort(crr, t);
	cout << "Сортировка массива" << endl;
	Print(crr, t);
	int number3;
	cout << "Введите количество сдвигов : "; cin >> number3;
	shiftLeft(crr, t, number3);
	cout << "Массив со сдвигом влево " << endl;
	Print(crr, t);
	shiftRight(crr, t, number3);
	cout << "Массив со сдвигом вправо " << endl;
	Print(crr, t);
	
	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << MinValue(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << MaxValue(arr2, ROWS, COLS) << endl;
	Sort(arr2, ROWS, COLS);
	cout << "Сортировка массива" << endl;
	Print(arr2, ROWS, COLS);

	cout << delimiter << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << MinValue(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << MaxValue(brr2, ROWS, COLS) << endl;
	Sort(brr2, ROWS, COLS);
	cout << "Сортировка массива" << endl;
	Print(brr2, ROWS, COLS);

	cout << delimiter << endl;

	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS, 40, 60);
	Print(crr2, ROWS, COLS);
	cout << "Сумма элементов массива " << Sum(crr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива " << Avg(crr2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << MinValue(crr2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << MaxValue(crr2, ROWS, COLS) << endl;
	Sort(crr2, ROWS, COLS);
	cout << "Сортировка массива" << endl;
	Print(crr2, ROWS, COLS);

	cout << delimiter << endl;
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand() % (maxRand * 100 - minRand * 100) + minRand * 100) * 0.01;
	}
}

int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int MinValue(char arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}

int MaxValue(char arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}

int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int MinValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	}
	return minValue;
}

int MaxValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue)maxValue = arr[i][j];
		}
	}
	return maxValue;
}


