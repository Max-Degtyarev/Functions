#include<iostream>
using namespace std;

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже \n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже \n";
}


int factorial(int n)
{
	
	if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		/*cout << n << endl;
		cout << "--------------\n";*/
		return 1;
	}
	return n * factorial(n - 1);



	/*cout << n << endl;
	int f = n * factorial(n - 1);
	cout << f << endl;
	return f;*/


}

double Power(double n, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	return n * Power(n, exp - 1);
	
	/*else if (exp > 0)return n * Power(n, exp - 1);
	else if (exp < 0)return 1 / n * Power(n, exp + 1);*/
	//return exp == 0 ? 1 : exp > 0 ? n * Power(n, exp - 1) : 1 / n * Power(n, exp + 1);
	//return exp == 0 ? 1 : exp > 0 ? n * Power(n, exp - 1) : 1 / Power(n, -exp);


}


void Fibonacci(int a, int b, int c)
{
	if ((a + b) > c)return;
	int d = a + b;
	a = b;
	b = d;
	cout << d << " ";
	Fibonacci(a, b, c);
}

void Fibonacci_2(int a, int b, int f)
{
	if (f == 0)return;
	int d = a + b;
	a = b;
	b = d;
	cout << d << " ";
	Fibonacci_2(a, b, f - 1);

}





//#define ELEVATOR
//#define FACTORIAL
//#define EXP
#define FIB




void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world!";
	//main();

#ifdef ELEVATOR
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << "Результат: " << factorial(n);
#endif


#ifdef EXP
	int n;
	int exp;
	cout << "Введите число: "; cin >> n;
	cout << "Введите степень: "; cin >> exp;
	cout << "Результат: " << Power(n, exp) << endl << endl;
	main();
#endif




#ifdef FIB
	int a = 0;
	int b = 1;
	int c, f;
	cout << "Введите предел ряда: "; cin >> c;
	cout << a << " " << b << " "; Fibonacci(a, b, c);
	cout << endl;
	cout << "Введите количество чисел ряда: "; cin >> f;
	f -= 2;
	cout << a << " " << b << " "; Fibonacci_2(a, b, f);


#endif







}