#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	int a,b;

	cout << "Введите высоту яруса ёлочки:\n";
	cin >> a;
	cout << "Введите количество ярусов ёлочки\n";
	cin >> b;

	int f = (a * 2 - 1) + (b - 1) * 2;     // максимальная ширина самого нижнего яруса (количество пробелов)
	f = f - 1;     // так как ёлочка рисуется двойным знаком

	int d = f;         // для изменения в цикле

	for (int i = 1; i <= b * 2 - 1; i += 2)
	{

		int c = i,     // для изменения в цикле
			e = d;     // для изменения в цикле
		for (int j = 1; j <= a; j++)
		{
			for (int k = 0; k < e; k++)
				cout << " ";
			for (int k = 0; k < c; k++)
				cout << "<>";
			cout << "\n";
			c += 2;
			e -= 2;
		}
		d -= 2;
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < f - 2; j++)
			cout << " ";
		for (int j = 0; j < 3; j++)
			cout << "<>";

		cout << "\n";
	}
	cout << "\n\n";
}