#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	int a;

	cout << "Введите количество ступенек:\n";
	cin >> a;
	cout << "\n\n";

	for (int i = 1; i <= a; i++)
	{
		cout << "***\n";

		for (int j = 0; j < i * 2; j++)
			cout << " ";

		cout << "*\n";

		for (int j = 0; j < i * 2; j++)
			cout << " ";

	}
	
	cout << "***\n\n";
}