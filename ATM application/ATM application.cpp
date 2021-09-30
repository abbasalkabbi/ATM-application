// ATM application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ShowMenu() {
	cout << "*************Menu************" << endl;
	cout << "1.Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;
	cout << "4.Exit" << endl;
}
int main()
{
	int option;
	double money =500;
   //show menu
	
	do {
		ShowMenu();
		cout << "option :";
		cin >> option;
		system("cls");
		switch (option) {
		case 1: cout << "you have " << money << "$" << endl;
			break;
		case 2: cout << "Deposit amount:";
			double Depositamount;
			cin >> Depositamount;
			money += Depositamount;
			cout << "you have " << money << "$" << endl;
			break;
		case 3:
			cout << "you have " << money << "$" << endl;
			cout << "Withdraw amount:";
			double Withdrawamount;
			cin >> Withdrawamount;
			if (Withdrawamount <= money)

				money -= Withdrawamount;
			else
				cout << "you dont have " << Withdrawamount <<endl;
			break;
		}
	} while (option != 4);
	
}


