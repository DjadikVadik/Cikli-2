#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	cout << "Список простых чисел в диапазоне от 2 до 10000000:\n";
	int n = 0;
	for (int i = 2; i < 10000000; i++)
	{
		int x, a = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			x = i % j;

			if (x == 0) a = a + j;	
		}
		if (a == i)
		{
			cout << i << "\t";
			n++;
		}
	}
	cout << "\nВсего таких чисел - " << n << "\n";
}