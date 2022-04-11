#include<iostream>
using namespace std;

int Add(int a, int b); //Прототип функции (объявление функции - Function declaration)
double Sub(int q, int x); // Прототип состоит только из заголовка функции
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b); //Вызов (использование) функции - Function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(b, a) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;


}

int Add(int a, int b) // Реализация функции (Определение функции - Function definition) 
{
	int c = a + b;
	return c;
}
double Sub(int w, int r) // Реализация состоит из заголовка и тела функции
{
	return w - r;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;

}


