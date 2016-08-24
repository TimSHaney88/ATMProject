#include "Account.h"

#include <iostream>
#include <fstream>

using namespace std;

Account::Account()
{
	balance = 1000;

	
}

//withdrawal money amount
bool Account::withdrawalFunds(double withdrawalAmount)
{
	if (balance > withdrawalAmount)
	{
		balance -= withdrawalAmount;
		return true;
	}
	else
	{
		cout << "Insufficient funds! " << endl;
		return false;
	}
}
 bool Account::depositFunds(double depositAmount)
{
	if (depositAmount > 0)
	{
		balance += depositAmount;
		return true;
	}
	else
	{
		cout << "Please enter a positive number. " << endl;
		return false;
	}
}
 void Account::viewAccountBalance()
 {
	 cout << " Your balancce is $" << balance << endl;
 }
 double Account::getBalance()
 {
	 return balance;
 }
 void Account::setBalance(double newBal)
 {
	 balance = newBal;
 }
 double Account::getWithdrawalAmount()
 {
	 return withdrawalAmount;
 }
 void Account::setWithdrawalAmount(double wAmount)
 {
	 withdrawalAmount = wAmount;
 }
 double Account::getDepositAmount()
 {
	 return depositAmount;
 }
 void Account::setDepositAmount(double dAmount)
 {
	 depositAmount = dAmount;
 }
 