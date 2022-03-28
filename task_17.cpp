#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");

	int n;     
	cout << "Введите размер фигуры (нечетное число):\n";
	cin >> n;
	// первая фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";
	for (int i = 1; i < n-1; i++)
	{
		cout << "*";
		for (int j = 0; j < i-1; j++)
			cout << " ";
		cout << "*";
		for (int j = n-3; j > i - 1; j--)
			cout << " ";
		cout << "*\n";
	}
	for (int i = 0; i < n; i++)
		cout << "*";	
	cout << "\n\n";

	//вторая фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";
	for (int i = 1; i < n - 1; i++)
	{
		cout << "*";
		for (int j = n - 3; j > i - 1; j--)
			cout << " ";
		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*\n";
	}
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n\n";

	//третья фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";
	for (int i = 1; i < n - 1; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n\n";

	// четвертая фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";

	for (int i = 0; i < (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < n - 2; j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";

	for (int i = 0; i < (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < n - 2; j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n\n";

	// пятая фигура
	for (int i = 0; i < n / 2 + 1; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*\n";		
	}

	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		for (int j = 0; j < n / 2 + i; j++)
			cout << " ";
		cout << "*";
		for (int j = (n - 3) / 2; j > i; j--)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n / 2; i++)
		cout << " ";
	for (int i = 0; i < n / 2 + 1; i++)
		cout << "*";
	cout << "\n\n";

	// шестая фигура
	for (int i = 0; i < n / 2; i++)
		cout << " ";
	for (int i = 0; i < n / 2 + 1; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		for (int j = n - (i + 1); j > 0; j--)
			cout << " ";
		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2 - i; j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n / 2 + 1; i++)
		cout << "*";
	cout << "\n\n";

	// седьмая фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*";
	
		for (int j = 0; j < (n - 1) - (i * 2 + 1); j++)
			cout << " ";
	
		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2 - i; j++)
			cout << " ";
		cout << "*";

		for (int j = 0; j < (i - 1) * 2 + 1; j++)
			cout << " ";
		cout << "*";
		for (int j = (n - 3) / 2; j > i; j--)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n\n";

	// восьмая фигура
	cout << "*";
	for (int i = 0; i < n - 2; i++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*";

		for (int j = 0; j < (n - 1) - (i * 2 + 1); j++)
			cout << " ";

		cout << "*";
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*";
	for (int j = 0; j < (n - 3) / 2; j++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2 - i; j++)
			cout << " ";
		cout << "*";

		for (int j = 0; j < (i - 1) * 2 + 1; j++)
			cout << " ";
		cout << "*";
		for (int j = (n - 3) / 2; j > i; j--)
			cout << " ";
		cout << "*\n";
	}

	cout << "*";
	for (int i = 0; i < n - 2; i++)
		cout << " ";
	cout << "*\n\n";

	// девятая фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n - 1) - (i * 2 + 1); j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n / 2; i++)
		cout << " ";
	cout << "*\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << " ";
		for (int j = 0; j < (n - 3) / 2 - i; j++)
			cout << " ";
		cout << "*";

		for (int j = 0; j < (i - 1) * 2 + 1; j++)
			cout << " ";
		cout << "*\n";
	}
	
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n\n";

    // десятая фигура
	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}

	for (int i = 0; i < n; i++)
		cout << "*";
	cout << "\n\n";

	//одинадцатая фигура
	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << " ";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << " ";
	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << "\n\n";

	// двенадцатая фигура
	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << " ";
	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << " ";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << "\n";

	for (int i = 1; i <= (n - 3) / 2; i++)
	{
		cout << "*";
		for (int j = 0; j < (n - 3) / 2; j++)
			cout << " ";
		cout << "*\n";
	}

	cout << " ";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << "*";
	cout << "\n";
}