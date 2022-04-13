#include<iostream>
using namespace std;

#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Shift.h"
#include"Sort.h"
#include"Statistics.h"



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
	FillRand(crr2, ROWS, COLS);
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











