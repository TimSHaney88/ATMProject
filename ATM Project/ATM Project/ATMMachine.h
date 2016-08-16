#pragma once
#ifndef ATMMACHINE_H
#define ATMMACHINE_H
#include "Account.cpp"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;



class ATMMachine
{
private:
	Account account_user;
	int input;
	double wAmount;
	double dAmount;
	double balance;

public:
	ATMMachine();
	void PromptMenu();


};


#endif // ATMMACHINE