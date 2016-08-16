#include "ATMMachine.h"

#include <iostream>

using namespace std;

ATMMachine::ATMMachine()
{
	double wAmount = 0;
	double dAmount = 0;
	double balance = 1000;
}
void ATMMachine::PromptMenu()
{
	cout << "Welcome to the ATM! " << endl;
	while (true)
	{
		cout << "Please enter in a selection between 1 and 4 ";
		cin >> input;
		
		if (input == 1)
		{
			
			cout << "How much would you like to withdrawal? ";
			cin >> wAmount;
			account_user.withdrawalFunds(wAmount);
			cout << " You withdrew $" << wAmount << endl;
			cout << balance;
			
		}
		 else if (input == 2)
		{
			cout << "How much would you like to deposit? ";
			cin >> dAmount;
			account_user.depositFunds(dAmount);
			cout << " You deposited $" << dAmount << endl;
			cout << balance;
		}
		 else if (input == 3)
		 {
			 account_user.viewAccountBalance(balance);
		 }
		 else if (input == 4)
		 {
			 break;
		 }
		 else
		 {
			 cout << "Invalid input. " << endl;
		 }
	}
}