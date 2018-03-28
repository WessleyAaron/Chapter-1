//Madlibs
//03/27/2018
//Author: Aaron Wessley

#include <iostream>
#include <string>

using std::string;


int main()
{
	std::string color;
	std::string word_Est;
	std::string body_Part_Plural;
	std::string animal;
	std::string noun;
	std::string plural_Noun;

	int a_First_Number_Chosen_By_User;
	int b_Second_Number_Chosen_By_User;
	int c_The_Result_Of_A_Minus_B;

	std::cout << "Welcome to Mad Libs. \n\n";
	std::cout << "Enter your favorite color >>>" << std::endl;
	std::cin >> color;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> word_Est;
	std::cout << "Enter a body part plural >>>" << std::endl;
	std::cin >> body_Part_Plural;
	std::cout << "Enter an animal >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a noun >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a plural noun >>>" << std::endl;
	std::cin >> plural_Noun;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> a_First_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> b_Second_Number_Chosen_By_User;

	
	c_The_Result_Of_A_Minus_B = a_First_Number_Chosen_By_User - b_Second_Number_Chosen_By_User;

	std::cout << "The " << color << " Dragon is the " << word_Est << " Dragon of all. It has " << c_The_Result_Of_A_Minus_B << std::endl;
	std::cout << body_Part_Plural << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << plural_Noun << "," << std::endl;
		std::cout << "although it will feast on nearly anything." << std::endl;

	system("Pause");
	return 0;
}