#include "ATMMachine.h"

#include <iostream>

using namespace std;

ATMMachine::ATMMachine()
{
	 wAmount = 0;
	 dAmount = 0;
	
}
void ATMMachine::PromptMenu()
{
	cout << "Welcome to the ATM! " << endl;
	while (true)
	{
		cout << "Please enter in a selection between 1 and 4 " << endl;
		cout << "1.  Withdrawal" << endl;
		cout << "2.  Deposit" << endl;
		cout << "3.  View Balance " << endl;
		cout << "4.  Exit " << endl;

		cin >> input;

		if (input == '1')
		{

			cout << "How much would you like to withdrawal? ";
			cin >> wAmount;

			if (wAmount < 0)
			{
				cout << "Enter a positive amount" << endl;
				break;
			}
			else

			{
				bool withdrawalCheck;

				withdrawalCheck = account_user.withdrawalFunds(wAmount);
				if (withdrawalCheck == true)
				{
					cout << " You withdrew $" << wAmount << endl;
					cout << account_user.getBalance() << endl;
				}
				else
				{
					cout << "Your balance is to low.  Please try again. " << endl;
				}
			}
		}

		 else if (input == '2')
		{
			cout << "How much would you like to deposit? ";
			cin >> dAmount;

			bool depositCheck;
			depositCheck = account_user.depositFunds(dAmount);
			if (depositCheck == true)
			{
				cout << " You deposited $" << dAmount << endl;
				cout << account_user.getBalance() << endl;
			}
		}
		 else if (input == '3')
		 {
			 account_user.viewAccountBalance();
		 }
		 else if (input == '4')
		 {
			 break;
		 }
		 else
		 {
			 cout << "Invalid input. " << endl;
		 }
	}
}
