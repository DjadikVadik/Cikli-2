#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	cout << "Список простых чисел в диапазоне от 2 до 10000000:\n";
	int n = 0;
	for (int i = 2; i < 10000000; i++)
	{
		int x,j;
		for (j = 1; j <= i / 2; j++)
		{
			x = i % j;
			if (x == 0 && j != 1 && j != i)			
				break;	
		}
		if (j == (i /2 + 1))
		{
			n++;
			cout << i << "\t";
		}
	}
	cout << "\nВсего таких чисел - " << n << "\n";
}