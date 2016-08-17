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
 