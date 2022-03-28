#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251>0");
	int n;
	cout << "Введите высоту домика(нечетное число):\n";
	cin >> n;
	bool x = (n - 1) % 4 - 2;

	for (int i = 0; i < n / 2; i++)   // верина крыши
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= n / 4 - x; i++)                  // крыша с трубой которая не касается  крыши
	{
		cout << " ";
		for (int j = 0; j < n / 4; j++)
			cout << "*";
		for (int j = 0; j < n / 2 - n / 4 - 1 - i; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < i * 2 - 1; j++)
			cout << " ";
		cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= n / 4; i++)                   // крыша с трубой которая касается  крыши
	{
		cout << " ";
		for (int j = 0; j < n / 4 - (i - 1); j++)
			cout << "*";
		for (int j = 0; j < n / 2 - 2 + (i * 2 - x); j++)
			cout << " ";
		cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= n; i++)                 // верх тела домика
		cout << "*";
	cout << "\n";

	cout << "*";                                  // 1й ряд тела домика до окна
	for (int i = 1; i <= n - 2; i++)
		cout << " ";
	cout << "*\n";

	if ((n / 2) % 2 == 0) x = false;
	else x = true;

	cout << "* ";                                 // тело домика и начало окна
	for (int i = 1; i <= n / 2 - (1 + x); i++)
		cout << "*";
	for (int i = 1; i <= n / 2 - (1 - x); i++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n / 2 - 4) / 2; i++)      // тело домика с окном с пробелами
	{
		cout << "* *";
		for (int j = 0; j < (n / 2 - 4) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n / 2 - 4) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < n / 2 - (1 - x); j++)
			cout << " ";
		cout << "*\n";
	}

	cout << "* ";                                 // тело домика и cередина окна
	for (int i = 1; i <= n / 2 - (1 + x); i++)
		cout << "*";
	for (int i = 1; i <= n / 2 - (1 - x); i++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n / 2 - 4) / 2; i++)      // тело домика с окном с пробелами
	{
		cout << "* *";
		for (int j = 0; j < (n / 2 - 4) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n / 2 - 4) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < n / 2 - (1 - x); j++)
			cout << " ";
		cout << "*\n";
	}

	cout << "* ";                                 // тело домика с нижней частью окна
	for (int i = 1; i <= n / 2 - (1 + x); i++)
		cout << "*";
	for (int i = 1; i <= n / 2 - (1 - x); i++)
		cout << " ";
	cout << "*\n";

	if ((n / 2) % 2 == 0) x = true;
	else x = false;

	for (int i = 1; i <= n / 2 - x; i++)         // тело домика без окна
	{
		cout << "*";
		for (int j = 0; j < n - 2; j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 1; i <= n; i++)                // нижняя часть домика
		cout << "*";
	cout << "\n";
}