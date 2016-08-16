#include "Account.h"

#include <iostream>
#include <fstream>

using namespace std;

Account::Account()
{
	balance = 1000;
	withdrawalAmount = 0;
	depositAmount = 0;
}
//withdrawal money amount
void Account::withdrawalFunds(double withdrawalAmount)
{
	balance -= withdrawalAmount;
}
 void Account::depositFunds(double depositAmount)
{
	balance += depositAmount;
}
 void Account::viewAccountBalance(double balance)
 {
	 cout << " Your balancce is $" << balance << endl;
 }
