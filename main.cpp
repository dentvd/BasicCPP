#include<iostream>
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
		float s, t, v;
		cout << "\tEnter distance in metrs => ";
		cin >> s;
		cout << "\tEnter time in minutes =>  ";
		cin >> t;
		system("cls");
		cout << "\t" << ((s / t) * 60) / 1000 << "km/h";




	}break;
	case 2:
	{int y, a;
	float hp, mp, sp, hz, mz, sz, x;
	cout << "\tEnter time start:" << endl;
	cout << "\tEnter hours   =>";
	cin >> hp;
	cout << "\tEnter minutes =>";
	cin >> mp;
	cout << "\tEnter seconds =>";
	cin >> sp;
	cout << "\tEnter time finish:" << endl;
	cout << "\tEnter hours   =>";
	cin >> hz;
	cout << "\tEnter minutes =>";
	cin >> mz;
	cout << "\tEnter seconds =>";
	cin >> sz;
	x = (((hz - hp) * 60) + (mz - mp) + (sz - sp) / 60) * 2;
	y = x;
	system("sls");
	cout << "\tThe cost of travel=>" << y << " grn" << y % 100 << " cop";

	}break;
	case 3:
	{float km, l76, l92, l95, c76, c92, c95, p76, p92, p95;
	cout << "\tEnter distance:" << endl;
	cout << "\tkilometers=>";
	cin >> km;
	cout << "Enter fuel consumption l/100km:" << endl;
	cout << "\tA76 => ";
	cin >> l76;
	cout << "\tA92 => ";
	cin >> l92;
	cout << "\tA95 => ";
	cin >> l95;
	cout << "Enter fuel cost grn:" << endl;
	cout << "\tA76 => ";
	cin >> c76;
	cout << "\tA92 => ";
	cin >> c92;
	cout << "\tA95 => ";
	cin >> c95;
	p76 = (km / 100) * l76 * c76;
	p92 = (km / 100) * l92 * c92;
	p95 = (km / 100) * l92 * c95;
	cout << "\t\t\t#>-------<Trip price>-------<#" << endl;
	cout << "\t\t\t|    A76   |    " << p76 << "     |" << endl;
	cout << "\t\t\t----------------------------" << endl;
	cout << "\t\t\t|    A92   |    " << p92 << "     |" << endl;
	cout << "\t\t\t----------------------------" << endl;
	cout << "\t\t\t|    A95   |    " << p95 << "     |" << endl;
	cout << "\t\t\t----------------------------" << endl;


	}break;
	case 4:
	{int s, h, m, t;
	cout << "\tStart time of the day:" << endl;
	cout << "\tEnter in second=> ";
	cin >> t;
	h = t / 360;
	m = (t - (h * 360)) / 60;
	s = t - (h * 360) - (m * 60);
	cout << "\tPresent time:  \t" << h << "h  " << m << "m   " << s << "s" << endl;
	cout << "\tUntil midnight:\t" << 24 - h << "h  " << 60 - m << "m  " << 60 - s << "s";


	}break;
	case 5:
	{int tr, s;
	cout << "\tEnter time worked:" << endl;
	cout << "\tsecond=>";
	cin >> s;
	cout << "Rest of working time:" << ((8 * 360) - s) / 360 << "h";
	}break;

	}return 0;
}