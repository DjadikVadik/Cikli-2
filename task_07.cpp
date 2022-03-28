#include<iostream>
#include<string>
using namespace std;
int main()
{
	system("chcp 1251 > 0");

	int n, // наше число
		j, // итератор цикла
		x; // значение разрядов
	string x1;
	cout << "введите число любой разрядности:\n";
	cin >> n;

	for (j = 10; j <= n * 10; j *= 10)  //значение всех разрядов кроме последнего
	{
		x = (n % j) / (j / 10);
		x1 = x1 + to_string(x);
	}

	int n1 = stoi(x1);

	if (n == n1)
		cout << "Число является полиндромом!!!\n";
	else
		cout << "Число не является полиндромом!!!\n";
}