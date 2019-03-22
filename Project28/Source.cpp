#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
#include<fstream>
using namespace std;
struct ozu
{
	char name[30];
	int chastota;
	int v;
	void pr()
	{
		cout << name << " " << chastota << " " << v << endl;
	}
};
struct clouth
{
	int r;
	char color[30];
	int lenght;
	void pr()
	{
		cout << color  << " " << r << " " << lenght << " " << endl;
	}
};
void t(int g)
{
	ofstream my1("out1.txt");
	char str[100];
	for (size_t i = 0; i < g; i++)
	{
		cin.ignore();
		cin.getline(str, 100);
		my1 << str << endl;
		cin.getline(str, 100);
		my1 << str << endl;
		cin.getline(str, 100);
		my1 << str << endl;
	}
}
void task1()
{
	ifstream in("out1.txt");
	int g;
	cin >> g;
	t(g);
	ozu *s = new ozu[g];
	for (size_t i = 0; i < g; i++)
	{
		in >> s[i].name;
		in >> s[i].chastota;
		in >> s[i].v;
	}
	int h;
	cin >> h;
	for (size_t i = 0; i < g; i++)
	{
		if (h < s[i].chastota)
		{
			s[i].pr();
		}
	}
	int y;
	cin >> y;
	for (size_t i = 0; i < g; i++)
	{
		if (y < s[i].v)
		{
			s[i].pr();
		}
	}
}
void task2()
{

	ifstream in("out1.txt");
	int g;
	cin >> g;
	t(g);
	clouth *s = new clouth[g];
	for (size_t i = 0; i < g; i++)
	{
		in >> s[i].color;
		in >> s[i].r;
		in >> s[i].lenght;
	}
	int h;
	cin >> h;
	for (size_t i = 0; i < g; i++)
	{
		if (h <= s[i].r)
		{
			s[i].pr();
		}
	}
	int y;
	cin >> y;
	for (size_t i = 0; i < g; i++)
	{
		if (y <= s[i].lenght)
		{
			s[i].pr();
		}
	}
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}