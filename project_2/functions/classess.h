#pragma once
#include <iostream>

class calculator
{
private:
	int choice;

public:
	void input();
	void normal_mode();
	void calculator_();
	int factorial(int number);
	int zen_mode();
	int zeroes_at_the_end(int number);
};
