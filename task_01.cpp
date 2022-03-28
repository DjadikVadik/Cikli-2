#include<iostream>
using namespace std;
int main()
{
	system("chcp 1251 > 0");

	int masiv[100];
	srand(time(0));
	int i;

	for (i = 0; i < 100; i++)
	{
		masiv[i] = rand() % 200 - 100;
	}

	int n_polog = 0,
		n_otric = 0,
		n_nuli = 0,
		n_chet = 0,
		n_nechet = 0;

	for (i = 0; i < 100; i++)
	{
		masiv[i] > 0 ? ++n_polog : masiv[i] < 0 ? ++n_otric : ++n_nuli;
		int x = masiv[i] % 2;
		if (x == 0 && masiv[i] != 0)  ++n_chet;
		else if (x != 0 && masiv[i] != 0)  ++n_nechet;
	}

	// так как у нас 100 чисел, то их количество будет совпадать с их процентом

	cout << "Процент положительных чисел = " << n_polog << "\n"
		<< "Процент отрицательных чисел = " << n_otric << "\n"
		<< "Процент нулей = " << n_nuli << "\n"
		<< "Процент четных чисел = " << n_chet << "\n"
		<< "Процент нечетных чисел = " << n_nechet << "\n";
}