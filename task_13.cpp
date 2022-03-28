#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	int a = 0,
		b = 1,
		c = 0,
		n = 0;

	cout << "Числа Фибоначи:\n";

	while (c < 10000000)
	{
		c = a + b;
		if (c >= 10000000) break;
		a = b;
		b = c;
		cout << c << "\n";
		n++;
	}

	cout << "\nВсего таких чисел - " << n << "\n";
}