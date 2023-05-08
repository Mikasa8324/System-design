#include "classes.h"

void calculator::input()
{
	std::cout << "1. Add two numbers\n"
			  << "2. Subtract two numbers\n"
			  << "3. Multiply two numbers\n"
			  << "4. Divide two numbers\n"
			  << "5. Factorial of a number\n"
			  << "6. Find the zeroes at the end of factorial of a number\n"
			  << "7. zen mode ( free mode)" << std::endl;
	std::cin >> choice;
}

int calculator::zen_mode()
{
	std::string mode_changer;
	std::cin >> mode_changer;
	if ((mode_changer == "normal") || (mode_changer == "NORMAL") || (mode_changer == "n") || (mode_changer == "N"))
	{
		calculator_();
		return 1;
	}
	else if ((mode_changer == "exit") || (mode_changer == "EXIT") || (mode_changer == "e") || (mode_changer == "E"))
	{
		return -1;
	}
	int number = std::stoi(mode_changer);
	std::string operator_;
	std::cin >> operator_;
	if ((operator_ == "+") || (operator_ == "-") || (operator_ == "/") || (operator_ == "*"))
	{
		int number2;
		std::cin >> number2;
		if (operator_ == "+")
		{
			std::cout << (number + number2) << std::endl;
		}
		else if (operator_ == "-")
		{
			std::cout << (number - number2) << std::endl;
		}
		else if (operator_ == "*")
		{
			std::cout << (number * number2) << std::endl;
		}
		else if (operator_ == "/")
		{
			std::cout << (number / number2) << std::endl;
		}
	}
	else if (operator_ == "!")
	{
		std::cout << factorial(number) << std::endl;
	}
	else if (operator_ == "!!")
	{
		std::cout << zeroes_at_the_end(number) << std::endl;
	}
	return 0;
}

int calculator::factorial(int number)
{
	int fact = 1;
	for (int i = 1; i <= number; i++)
	{
		fact *= i;
	}
	return fact;
}

void calculator::normal_mode()
{
	int number1;
	if (choice <= 4)
	{
		int number2;
		std::cout << "Enter first number : ";
		std::cin >> number1;
		std::cout << "Enter second number : ";
		std::cin >> number2;
		if (choice == 1)
		{
			std::cout << "Adding. .. ...\n"
					  << number1 << "+" << number2 << " = " << (number1 + number2) << std::endl;
		}
		else if (choice == 2)
		{
			std::cout << "Subtracting. .. ...\n"
					  << number1 << "-" << number2 << " = " << (number1 - number2) << std::endl;
		}
		else if (choice == 3)
		{
			std::cout << "Multiplying. .. ...\n"
					  << number1 << "x" << number2 << " = " << (number1 * number2) << std::endl;
		}
		else if (choice == 4)
		{
			std::cout << "Dividing. .. ...\n"
					  << number1 << "/" << number2 << " = " << (number1 / number2) << std::endl;
		}
	}
	else if (choice == 5)
	{
		std::cout << "Enter number : ";
		std::cin >> number1;
		std::cout << "Finding factorial. .. ...\n"
				  << number1 << "!"
				  << " = " << factorial(number1) << std::endl;
	}
	else if (choice == 6)
	{

		std::cout << "Enter number : ";
		std::cin >> number1;
		std::cout << "Finding zeroes at the end. .. ...\n";
		std::cout << number1 << "!! = " << zeroes_at_the_end(number1) << std::endl;
	}
}

int calculator::zeroes_at_the_end(int number)
{
	int zeroes = 0;
	while (number > 0)
	{
		zeroes = (zeroes + (number / 5));
		number = number / 5;
	}
	return zeroes;
}

void calculator::calculator_()
{
	input();
	while (true)
	{
		if ((choice <= 6) && (choice > 0))
		{
			normal_mode();
			input();
		}
		else if (choice == 7)
		{
			zen_mode();
			if (zen_mode() == -1)
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
	std::cout << "Thanks for using this calculator";
}
