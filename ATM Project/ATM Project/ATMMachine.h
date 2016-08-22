#pragma once
#ifndef ATMMACHINE_H
#define ATMMACHINE_H
#include "Account.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;



class ATMMachine
{
private:
	Account account_user;
	char input;
	double wAmount;
	double dAmount;
	

public:
	ATMMachine();
	void PromptMenu();


};


#endif // ATMMACHINE