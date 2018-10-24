#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, i;
	for (i = 0; i < 4; i++)
	{
		cout << "Welcome to customer care services\n";
		cout << "Dial 1 to call customer care excecuter\n";
		cout << "Dial 2 to check balance\n";
		cout << "Dial 3 to check data plans\n";
		cin >> a;
		if (i == 4)
		{
			cout << "this is your last chance to proceed\n";
		}
		else
		{
			cout << "";
		}
		if (a == 1)
		{
			cout << " \nthanks for using our service";
		}
		else
		{
			cout << "\nthanks for using our services";
		}
		if (a == 2)
		{
			cout << "\n you have ₹250 as your main account balance";
		}
		else
		{
			cout << "";
		}
		if (a == 3)
		{
			cout << "\nwe have many data plans but we suggest you to buy the data plan which has 1.4 gb data per day";
		}
		else
		{
			cout << "";
		}
		break;
	}
}
