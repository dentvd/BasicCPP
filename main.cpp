#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout << "\t\t\t#>---------<MENU>---------<#" << endl;
	cout << "\t\t\t|    1 - Task_1            |" << endl;
	cout << "\t\t\t|    2 - Task_2            |" << endl;
	cout << "\t\t\t|    3 - Task_3            |" << endl;
	cout << "\t\t\t|    4 - Task_4            |" << endl;
	cout << "\t\t\t|    5 - Task_5            |" << endl;
	cout << "\t\t\t|    6 - Task_6            |" << endl;
	cout << "\t\t\t|    7 - Task_7            |" << endl;
	cout << "\t\t\t|    8 - Task_8            |" << endl;
	cout << "\t\t\t|    9 - Task_9            |" << endl;
	cout << "\t\t\t#>------------------------<#" << endl;
	cout << "\t\t\t|    Exit - 0              |" << endl;
	cout << "\t\t\t#>------------------------<#" << endl;
	cout << "\t\t\tEnter task =>";
	int number;
	cin >> number;
	system("cls");
	switch (number)
	{
	case 1:
	{
		double R1, R2, R3, R0;
		cout << "\tEnter R1=> ";
		cin >> R1;
		cout << "\tEnter R2=> ";
		cin >> R2;
		cout << "\tEnter R3=> ";
		cin >> R3;
		system("cls");
		cout << "\tR0=\t" << 1 / (1 / R1 + 1 / R2 + 1 / R3);

	}break;
	case 2:
	{
		double L;
		const float pi = 3.14;
		cout << "\tEnter circumference L=>  ";
		cin >> L;
		cout << "\t Area of circle=> " << pi * ((L / (2 * pi)) * (L / (2 * pi)));


	}break;
	case 3:
	{
		int v, t, a;
		cout << "\tCalculate distance traveled;" << endl;
		cout << "\tEnter movevent speed=> ";
		cin >> v;
		cout << "\tEnter travel time=>";
		cin >> t;
		cout << "\tEnter acceleration value=>";
		cin >> a;
		system("cls");
		cout << "\tDistance traveled=>  " << v * t + ((a * (t * t) / 2));


	}break;
	case 4:
	{
		int  sec, min, hour;
		cout << "Enter seconds=>";
		cin >> sec;
		cout << "\tHour     =>" << "\t" << sec / 60 / 60 << endl;
		cout << "\tMinuts   =>" << "\t" << (sec / 60) % 60 << endl;
		cout << "\tseconds  =>" << "\t" << sec % 60;


	}break;
	case 5:
	{

		float num;
		int grn, cop;
		cout << "\tEnter number=> ";
		cin >> num;
		grn = num;
		cout << "\t" << grn << "grn ";
		cop = num * 100;
		cout << cop % 100 << "cop";

	}break;
	case 6:
	{
		float hour, min, sec, time, km, dist, m;

		cout << "\tEnter hours=>";
		cin >> hour;
		cout << "\tEnter minutes=>";
		cin >> min;
		cout << "\tEnter seconds=>";
		cin >> sec;
		cout << "\tEnter distance in meters" << endl;
		cout << "\tKilomiters=>";
		cin >> km;
		cout << "\tMeters=>";
		cin >> m;
		dist = (km * 1000) + m;
		time = (hour * 360) + (min * 60) + sec;

		cout << "\tYour speed=>" << setprecision(3) << (((dist / time) * 360) / 1000) << "km/h";



	}break;
	case 7:
	{
		int day, week;
		cout << "\tEnter amout of days =>";
		cin >> day;
		cout << "\tThat's  " << day / 7 << " full weeks";
	}break;
	case 8:
	{
		int x;
		cout << "\tEnter year=> ";
		cin >> x;
		bool year = (x % 4) > 0;

		cout << "\tThis year have " << 366 - year << " days.";
		return 0;

	}break;
	case 9:
	{

		double a, b;
		char function;
		cout << "\tEnter number => ";
		cin >> a;
		cout << "\tEnter number => ";
		cin >> b;
		cout << "\tEnter function => ";
		cin >> function;
		if (function == '+')
		{
			cout << "\t" << a + b;
		}
		else if (function == '-')
		{
			cout << "\t" << a - b;
		}
		else if (function == '*')
		{
			cout << "\t" << a * b;
		}
		else
		{
			cout << "\t" << a / b;
		}
	}break;
	}
	return 0;



}
