#include<iostream>
#include<iomanip>
using namespace std;

double Power(double number, double exp);


void main()
{
	setlocale(LC_ALL, "");
	double number;
	double exp;
	cout << fixed;
	cout << setprecision(10);
	cout << "������� �����: "; cin >> number;
	cout << "������� ���������� �������: "; cin >> exp;
	cout << "��������� ����������: "/* << fixed*/ << Power(number, exp) << endl;
}

double Power(double number, double exp)
{
	double a = 1;
	for (int i = exp; i > 0; i--)
	{
		a = a * number;
		cout /*<< fixed*/ << a << endl;
	}
	return a;
}


