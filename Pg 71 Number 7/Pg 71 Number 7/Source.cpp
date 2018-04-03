// Page 71 Number 7
//4-3-18
//Author: Aaron Wessley

#include <iostream>
#include <string>

double pounds_Rate = 0.71;
double pesos_Rate = 18.21;
double yen_Rate = 106.52;

int main()
{
	system("cls");
	double input_USD;
	double pounds_output;
	double pesos_output;
	double yen_output;

	std::cout << "How much money (United States dollars) do you have? >>> ";
	std::cin >> input_USD;

	pounds_output = (input_USD * pounds_Rate);
	pesos_output = (input_USD * pesos_Rate);
	yen_output = (input_USD * yen_Rate);

	std::cout << "You would be able to exchange $" << input_USD << " for " << pounds_output << " British pounds." << std::endl;
	std::cout << "You would be able to exchange $" << input_USD << " for " << pesos_output << " Mexican pesos." << std::endl;
	std::cout << "You would be able to exchange $" << input_USD << " for " << yen_output << " Japanese yen." << std::endl;

	system("pause");
	main();
}