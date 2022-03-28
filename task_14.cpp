#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");
	cout << "Введите год : ";
	int year;
	cin >> year;
	int d = 1;            // первое января начало отсчета

	if (year < 2001)
	{
		for (int i = 2000; i >= year; i--)
		{
			if (i % 4 == 0)
				i -= 2;
			if (i % 4 != 0)
				d -= 1;
			if (d == 0)
				d = 7;
			if (d == -1)
				d = 6;
		}
	}
	else if (year > 2001)
	{
		for (int i = 2002; i <= year; i++)
		{
			if (i % 4 == 1)
				d += 2;
			if (i % 4 != 1)
				d += 1;
			if (d == 8)
				d = 1;
			if (d == 9)
				d = 2;
		}
	}

	int January = 31,
		February,
		March = 31,
		April = 30,
		May = 31,
		June = 30,
		July = 31,
		August = 31,
		September = 30,
		October = 31,
		November = 30,
		December = 31;

	if (year % 4 == 0)
		February = 29;
	else
		February = 28;

	cout << "\n\n ЯНВАРЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	int k = 1, i = d;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{
		
		for (k; k <= January; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == January + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n ФЕВРАЛЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= February; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == February + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n МАРТ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= March; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == March + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n АПРЕЛЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= April; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == April + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n МАЙ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= May; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == May + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n ИЮНЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= June; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == June + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n ИЮЛЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= July; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == July + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n АВГУСТ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= August; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == August + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n СЕНТЯБРЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= September; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == September + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n ОКТЯБРЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= October; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == October + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n НОЯБРЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= November; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == November + 1) break;
		i = 1;
		k++;
	}

	cout << "\n\n ДЕКАБРЬ \n\n";
	cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n___________________________________________________\n";

	k = 1;

	for (int j = 1; j < i; j++)
	{
		cout << "\t";
	}

	for (i; i <= 7;)
	{

		for (k; k <= December; k++)
		{
			cout << k << "\t";
			i++;
			if (i == 8) break;
		}
		cout << "\n";
		if (k == December + 1) break;
		i = 1;
		k++;
	}
}
