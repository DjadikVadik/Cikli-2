#include<iostream>
using namespace std;
int main()
{
	system("chcp 1251 > 0");

	double N,     // ежемесячная стипендия
		M,        // ежемесячные расходы
		X = 0;    // необходимо попросить денег
	cout << "введите размер стипендии\n";
	cin >> N;
	cout << "введите стоимость ежемесячных расходов\n";
	cin >> M;

	for (int i = 1; i < 11; i++)
	{
		double x = M - N; //необходимо попросить денег в месяц
		X = X + x;
		M = M + M * 0.03;
	}
	cout << X << " - гривен нужно попросить у родителей\n";
}