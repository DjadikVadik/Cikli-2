#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	int a, b;

	cout << "Введите длинну отрезка:\n";
	cin >> a;
	cout << "Введите количество ступенек:\n";
	cin >> b;

	for (int i = 1; i <= b; i++)
	{
		cout << "      ";

		for (int j = 0; j < a; j++)
			cout << "*";

		cout << "\n";

		for (int j = 0; j < i; j++)
			cout << " ";
	}
}