// flames.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int g, m, x, y, z; m = 0; 
	int d, l, e, h;
	int n, o, p, q, r, s;
	n = 1; o = 2; p = 3; q = 4; r = 5; s = 0;
	char a[50], b[50], c[100];
	char f[10] = { 'F', 'L', 'A', 'M', 'E', 'S' };
	cout << "____Love?Lov\n";
	cout << "____?Love?Love\n";
	cout << "____?Love?Love?\n";
	cout << "___?Love?Love?\n";
	cout << "__?Love?Love?\n";
	cout << "__?Love?Love\n";
	cout << "_?Love?Love?\n";
	cout << "_?Love?Love?L\n";
	cout << "_?Lve?Love?Lo\n";
	cout << "?Love?Love?Lov\n";;
	cout << "?Love?Love?Love\n";
	cout << "?Love?Love?Love?\n";
	cout << "_?Love?__?Love?Love?\n";
	cout << "__?Love?___Love?Love?\n";
	cout << "__?Lov_____?Love?Love <3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3\n";
	cout << "_?Lov_____?Love?Lov   <3\t\t\t\t\t\t    <3\n";
	cout << "__?Lov____?Love?Lo    <3\t\tLove Probability\t\t    <3\n";
	cout << "___?Lov___?Love?L     <3\t\t\t\t\t\t    <3\n";
	cout << "____?Lov__?Love?      <3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3\n\n\n";
	cout << "What the future Have For you..........Know today" << endl << endl;
	cout << "Enter your first name --> ";
	gets_s(a);
	cout << endl << "Enter your loved ones first name --> ";
	gets_s(b);
	int a1, b1;
	a1 = 5;
	b1 = 10;
	a1 = 1/ 6;
	cout << a1;

	x = strlen(a);
	y = strlen(b);
	z = x + y;
	if (x > y)
		g = x;
	else
		g = y;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (a[i] == b[j])
			{
				a[i] = NULL;
				b[j] = NULL;
				break;
			}

		}
	}

	for (int i = 0; i < x; i++)
	{
		if (a[i] != NULL)
			m++;
	}
	for (int i = 0; i < y; i++)
	{
		if (b[i] != NULL)
			m++;
	}
	int temp = 0, len = 6;
	l = m;
	g = 0;
	for (int i = 0; i < 5; i++)
	{
		temp = 0;
		do
		{
			if (g > 5)
			{
				g = 0;
				g++;
			}
			else
			{
				g++;
			}
			
			if (f[g-1] != NULL)
			{
				temp++;	
			}

			

		
		} while (temp!=l);
		
		f[g - 1] = NULL;
	}
	for (int i = 0; i < 6; i++)
	{
		{
			if (f[i] != NULL)
			{
				l = i + 1;
				break;
			}
		}
	}
	switch (l)
	{
	case 1:{
		cout << "\t\n\nFriendship Forever......No less No more";
		break;
	}
	case 2:{
		cout << "\t\n\nLover.......and will remain lover only";
		break;
	}
	case 3:{
		cout << "\t\n\nAdorable Couple......You will Nice together";
		break;
	}
	case 4:{
		cout << "\t\n\nMarriage......too Far Fetched???";
		break;
	}
	case 5:{
		cout << "\t\n\nEnemity........Beware";
		break;
	}
	case 6:{
		cout << "\t\n\nBrother sister.....Hard Luck";
		break;
	}
  }
	return 0;
}

