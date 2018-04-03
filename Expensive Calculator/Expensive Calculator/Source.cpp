//Expensive Calculator
//3/27/18
//Author: Aaron Wessley


#include<iostream>


int main()
{
	
	int firstInput;
	int secondInput;
	int answer;
	
	std::cout << "Please enter a number >>>" << std::endl;
	std::cin >> firstInput;

	std::cout << "Please enter another number less than the first >>>" << std::endl;
	std::cin >> secondInput;

	std::cout << firstInput << " + " << secondInput << " = " << firstInput + secondInput << std::endl;
	std::cout << firstInput << " - " << secondInput << " = " << firstInput - secondInput << std::endl;
	std::cout << firstInput << " X " << secondInput << " = " << firstInput * secondInput << std::endl;
	std::cout << firstInput << " / " << secondInput << " = " << firstInput / secondInput << std::endl;
	
	system("Pause");
		return 0;
}