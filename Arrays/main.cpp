#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(double arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int MinValue(int arr[], const int n);
double MinValue(double arr[], const int n);

int MaxValue(int arr[], const int n);
double MaxValue(double arr[], const int n);

void shiftLeft(int arr[], const int n, int number);
void shiftRight(int arr[], const int n, int number);
// ����������
//void FillRand(double arr[], const int w);
//void Print(double arr[], const int w);



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	//Sort(arr, n);
	//Print(arr, n);
	cout << "����� ��������� ������� " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� ������� " << Avg(arr, n) << endl;
	cout << "����������� �������� ������� " << MinValue(arr, n) << endl;
	cout << "������������ �������� ������� " << MaxValue(arr, n) << endl;
	int number;
	cout << "������� ���������� ������� : "; cin >> number;
	shiftLeft(arr, n, number);
	cout << "������ �� ������� ����� " << endl;
	Print(arr, n);
	shiftRight(arr, n, number);
	cout << "������ �� ������� ������ " << endl;
	Print(arr, n);
	cout << endl;

	cout << delimiter << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "����� ��������� ������� " << Sum(brr, m) << endl;
	cout << "������� �������������� ��������� ������� " << Avg(brr, m) << endl;
	cout << "����������� �������� ������� " << MinValue(brr, m) << endl;
	cout << "������������ �������� ������� " << MaxValue(brr, m) << endl;

	cout << delimiter << endl;

	
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);





	/*const int m = 12;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);*/
	

}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
int MinValue(int arr[], const int n)
{
	int minValue = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}
double MinValue(double arr[], const int n)
{
	double minValue = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}
int MaxValue(int arr[], const int n)
{
	int maxValue = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
double MaxValue(double arr[], const int n)
{
	double maxValue = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
void shiftLeft(int arr[], const int n, int number)
{
	for (int i = 0; i < number; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number)
{
	for (int i = 0; i < number * 2; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

// ����������
//void FillRand(double rrr[], const int w)
//{
//	for (int i = 0; i < w; i++)
//	{
//		rrr[i] = rand() % 20;
//	}
//}
//void Print(double arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << tab;
//	}
//	cout << endl;
//}










