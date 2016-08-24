#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
	double balance;
	
	
public:
	Account() ;
	//withdrawal money amount
	bool withdrawalFunds(double);
	//how much to deposit 
	bool depositFunds(double);
	//how much in account balance
	void viewAccountBalance();
	double getBalance();
	void setBalance(double);
	double getWithdrawalAmount();
	void setWithdrawalAmount(double);
	double getDepositAmount();
	void setDepositAmount(double);
	
};





#endif // ACCOUNT_H