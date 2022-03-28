#include<iostream>
using namespace std;
int main()
{
	system("chcp 1251 > 0");

	cout << "x   |\t1   |\t2   |\t3   |\t4   |\t5   |\t6   |\t7   |\t8   |\t9   |"
		<<"\n_____________________________________________________________________________\n";

	for (int i = 1; i < 10; i++)
	{
		cout << i << "   |";
		for (int j = 1; j < 10; j++)
			cout << "\t" << j * i;
		cout << "\n";
	}
}