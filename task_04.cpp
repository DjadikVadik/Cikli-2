#include<iostream>
using namespace std;
int main()
{
	system("chcp 1251 > 0");

	int N,     // ширина прямоугольника
		M;     // высота прямоугольника
	cout << "введите ширину прямоугольника\n";
	cin >> N;
	cout << "введите высоту прямоугольника\n";
	cin >> M;
	cout << "\n\n";

	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
			cout << "*";
		cout << "\n";
	}

	cout << "\n\n";

	for (int i = 1; i <= M; i++)
	{
		if (i == 1 || i == M)
		{
			for (int j = 1; j <= N; j++)
				cout << "*";
		}
		else
		{
			cout << "*";
			for (int j = 1; j <= (N - 2); j++)
				cout << " ";
			cout << "*";
		}
		cout << "\n";
	}
}