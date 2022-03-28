#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	int n;
	cout << "Введите любое число от 0 до 99 999 999 : ";
	cin >> n;

	int y = 1,  // делитель большего разряда числа кратный 10ти
		a = 1; // количество разрядов в числе

	for (y; y <= n / 10; y *= 10)
		a++;

	int x,        // значение разряда
		max = 0,  // максимальное значение из разрядов числа
		a1 = a,   // переменная для изменения в цикле
		n1 = n,   // переменная для изменения в цикле
		y1 = y;   // переменная для изменения в цикле

	for (a1; a1 > 0; a1--)
	{
		x = n1 / y1;
		if (x > max) max = x;
		n1 = n1 - x * y1;
		y1 = y1 / 10;
	}
	
	for (int k = 0; k < 7; k++) // цикл повторится 7 раз, так как рисование цифры займет 7 строк
	{
		a1 = a;
		n1 = n;
		y1 = y;
		cout << "\n";

		for (a1; a1 > 0; a1--)
		{
			x = n1 / y1;
			n1 = n1 - x * y1;
			y1 = y1 / 10;

			// 0

			string a = "*";
			if (x == max) a = to_string(max);

			if (x == 0 && k == 0) cout << "   " << a << a << a << "      ";
			else if (x == 0 && k == 1) cout << "  " << a << "   " << a << "     ";
			else if (x == 0 && k == 2) cout << " " << a << "     " << a << "    ";
			else if (x == 0 && k == 3) cout << " " << a << "     " << a << "    ";
			else if (x == 0 && k == 4) cout << " " << a << "     " << a << "    ";
			else if (x == 0 && k == 5) cout << "  " << a << "   " << a << "     ";
			else if (x == 0 && k == 6) cout << "   " << a << a << a << "      ";

			// 1

		    a = "*";
			if (x == max) a = to_string(max);

			if (x == 1 && k == 0) cout << "  " << a << "    ";
			else if (x == 1 && k == 1) cout << " " << a << a << "    ";
			else if (x == 1 && k == 2) cout << "  " << a << "    ";
			else if (x == 1 && k == 3) cout << "  " << a << "    ";
			else if (x == 1 && k == 4) cout << "  " << a << "    ";
			else if (x == 1 && k == 5) cout << "  " << a << "    ";
			else if (x == 1 && k == 6) cout << " " << a << a << a << "   ";
			
			// 2

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 2 && k == 0) cout << "  " << a << a << a << "    ";
			else if (x == 2 && k == 1) cout << " " << a << "   " << a << "   ";
			else if (x == 2 && k == 2) cout << "    " << a << "    ";
			else if (x == 2 && k == 3) cout << "   " << a << "     ";
			else if (x == 2 && k == 4) cout << "  " << a << "      ";
			else if (x == 2 && k == 5) cout << " " << a << "       ";
			else if (x == 2 && k == 6) cout << " " << a << a << a << a << a << "   ";

			// 3

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 3 && k == 0) cout << "  " << a << a << a << "    ";
			else if (x == 3 && k == 1) cout << " " << a << "   " << a << "   ";
			else if (x == 3 && k == 2) cout << "     " << a << "   ";
			else if (x == 3 && k == 3) cout << "  " << a << a << a << "    ";
			else if (x == 3 && k == 4) cout << "     " << a << "   ";
			else if (x == 3 && k == 5) cout << " " << a << "   " << a << "   ";
			else if (x == 3 && k == 6) cout << "  " << a << a << a << "    ";

			// 4

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 4 && k == 0) cout << "    " << a << "     ";
			else if (x == 4 && k == 1) cout << "   " << a << a << "     ";
			else if (x == 4 && k == 2) cout << "  " << a << " " << a << "     ";
			else if (x == 4 && k == 3) cout << " " << a << "  " << a << "     ";
			else if (x == 4 && k == 4) cout << " " << a << a << a << a << a << a << "   ";
			else if (x == 4 && k == 5) cout << "    " << a << "     ";
			else if (x == 4 && k == 6) cout << "    " << a << "     ";

			// 5

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 5 && k == 0) cout << " " << a << a << a << a << a << "   ";
			else if (x == 5 && k == 1) cout << " " << a << "       ";
			else if (x == 5 && k == 2) cout << " " << a << "       ";
			else if (x == 5 && k == 3) cout << " " << a << a << a << a << "    ";
			else if (x == 5 && k == 4) cout << "     " << a << "   ";
			else if (x == 5 && k == 5) cout << " " << a << "   " << a << "   ";
			else if (x == 5 && k == 6) cout << "  " << a << a << a << "    ";

			// 6

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 6 && k == 0) cout << "  " << a << a << a << "    ";
			else if (x == 6 && k == 1) cout << " " << a << "   " << a << "   ";
			else if (x == 6 && k == 2) cout << " " << a << "       ";
			else if (x == 6 && k == 3) cout << " " << a << a << a << a << "    ";
			else if (x == 6 && k == 4) cout << " " << a << "   " << a << "   ";
			else if (x == 6 && k == 5) cout << " " << a << "   " << a << "   ";
			else if (x == 6 && k == 6) cout << "  " << a << a << a << "    ";

			// 7

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 7 && k == 0) cout << " " << a << a << a << a << a << "   ";
			else if (x == 7 && k == 1) cout << "     " << a << "   ";
			else if (x == 7 && k == 2) cout << "    " << a << "    ";
			else if (x == 7 && k == 3) cout << "   " << a << "     ";
			else if (x == 7 && k == 4) cout << "  " << a << "      ";
			else if (x == 7 && k == 5) cout << " " << a << "       ";
			else if (x == 7 && k == 6) cout << " " << a << "       ";

			// 8

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 8 && k == 0) cout << "  " << a << a << a << "    ";
			else if (x == 8 && k == 1) cout << " " << a << "   " << a << "   ";
			else if (x == 8 && k == 2) cout << " " << a << "   " << a << "   ";
			else if (x == 8 && k == 3) cout << "  " << a << a << a << "    ";
			else if (x == 8 && k == 4) cout << " " << a << "   " << a << "   ";
			else if (x == 8 && k == 5) cout << " " << a << "   " << a << "   ";
			else if (x == 8 && k == 6) cout << "  " << a << a << a << "    ";

			// 9

			a = "*";
			if (x == max) a = to_string(max);

			if (x == 9 && k == 0) cout << "  " << a << a << a << "    ";
			else if (x == 9 && k == 1) cout << " " << a << "   " << a << "   ";
			else if (x == 9 && k == 2) cout << " " << a << "   " << a << "   ";
			else if (x == 9 && k == 3) cout << "  " << a << a << a << a << "   ";
			else if (x == 9 && k == 4) cout << "     " << a << "   ";
			else if (x == 9 && k == 5) cout << " " << a << "   " << a << "   ";
			else if (x == 9 && k == 6) cout << "  " << a << a << a << "    ";
		}
	}
	cout << "\n";
}
