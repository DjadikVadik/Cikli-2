#include<iostream>
using namespace std;
int main()
{
	system("chcp 1251 > 0");

	int n;     // высота треугольника

	cout << "введите высоту треугольника:\n";
	cin >> n;


	int x = 1;  // переменная для написания звездочек в зависипости от высоты треугольника

	cout << "\n\n";

	for (int i = 1; i <= n; i++)
	{
		for (int k = n - i; k > 0; k--)   // цикл пробелов
			cout << " ";

		for (int j = 0; j < x; j++)       // цикл звезд
			cout << "*";
		x += 2;

		for (int k = n - i; k > 0; k--)   // цикл пробелов
			cout << " ";
		cout << "\n";
	}

	cout << "\n\n";

	for (int k = n - 1; k > 0; k--)  // первый ряд (вершина) треугольника 
		cout << " ";				 // первый ряд (вершина) треугольника
									 // первый ряд (вершина) треугольника
	cout << "*";					 // первый ряд (вершина) треугольника
									 // первый ряд (вершина) треугольника
	for (int k = n - 1; k > 0; k--)	 // первый ряд (вершина) треугольника
		cout << " ";				 // первый ряд (вершина) треугольника
	cout << "\n";

	x = 1;        // переменная для написания прбелов внутри треугольника

	for (int i = 2; i <= n; i++)
	{
		if (i == n)
		{
			for (int j = 1; j < n * 2; j++) cout << "*";  // нижний ряд звездочек
		}
		else
		{
			for (int k = n - i; k > 0; k--)   // цикл пробелов
				cout << " ";

			cout << "*";                      // звездочка

			for (int k = 0; k < x; k++)       // цикл пробелов
				cout << " ";
			x += 2;

			cout << "*";                      //звездочка

			for (int k = n - i; k > 0; k--)   // цикл пробелов
				cout << " ";
			cout << "\n";
		}

	}
	cout << "\n\n";
}