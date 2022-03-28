#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >nul");
	cout << "Введите день (2 цифры): ";
	int day;
	cin >> day;
	cout << "Введите месяц (2 цифры): ";
	int month;
	cin >> month;
	cout << "Введите год (4 цифры): ";
	int year;
	cin >> year;

	int d = 1;            // первое января начало отсчета (1-понедельник)

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

	int k = 1, i = d, m = 1;   // k - число месяца, i - день недели, m - месяц
	
	for (i; i <= 7;)
	{		
		for (k; k <= January; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == January + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 2;

	for (i; i <= 7;)
	{
		for (k; k <= February; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == February + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 3;

	for (i; i <= 7;)
	{
		for (k; k <= March; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == March + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 4;

	for (i; i <= 7;)
	{
		for (k; k <= April; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == April + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 5;

	for (i; i <= 7;)
	{
		for (k; k <= May; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == May + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 6;

	for (i; i <= 7;)
	{
		for (k; k <= June; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == June + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 7;

	for (i; i <= 7;)
	{
		for (k; k <= July; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == July + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 8;

	for (i; i <= 7;)
	{
		for (k; k <= August; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == August + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 9;

	for (i; i <= 7;)
	{
		for (k; k <= September; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == September + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 10;

	for (i; i <= 7;)
	{
		for (k; k <= October; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == October + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 11;

	for (i; i <= 7;)
	{
		for (k; k <= November; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == November + 1) break;
		i = 1;
		k++;
	}

	k = 1;
	m = 12;

	for (i; i <= 7;)
	{
		for (k; k <= December; k++)
		{
			if (k == day && m == month)
				goto link;
			i++;
			if (i == 8) break;
		}
		if (k == December + 1) break;
		i = 1;
		k++;
	}
link:
	i == 1 ? cout << "\n Это Понедельник!\n"
		: i == 2 ? cout << "\n Это Вторник!\n"
		: i == 3 ? cout << "\n Это Среда!\n"
		: i == 4 ? cout << "\n Это Четверг!\n"
		: i == 5 ? cout << "\n Это Пятница!\n"
		: i == 6 ? cout << "\n Это Суббота!\n"
		: cout << "\n Это Воскресенье!\n";
}
