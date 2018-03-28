//Madlibs 2
//03/28/2018
//Author: Aaron Wessley

#include <iostream>
#include <string>

using std::string;


int main()
{
	std::string color;
	std::string body_Part_Plural;
	std::string animal;
	std::string word_Est;

	int first_Number_Chosen_By_User;
	int second_Number_Chosen_By_User;
	int third_Number_Chosen_By_User;
	int the_Result_Of_A_Plus_B_Minus_C;
	
	int fourth_Number_Chosen_By_User;
	int fifth_Number_Chosen_By_User;
	int sixth_Number_Chosen_By_User;
	int the_Result_Of_D_times_E_minus_f;

	int seventh_Number_Chosen_By_User;
	int eighth_Number_Chosen_By_User;
	int ninth_Number_Chosen_By_User;
	int the_Result_Of_G_times_H_Plus_I;
	

	std::cout << "Welcome to Mad Libs 2.0. \n\n";
	std::cout << "Enter your least favorite color >>>" << std::endl;
	std::cin >> color;
	std::cout << "Enter a body part plural >>>" << std::endl;
	std::cin >> body_Part_Plural;
	std::cout << "Enter an animal >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> word_Est;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> first_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> second_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> third_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> fourth_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> fifth_Number_Chosen_By_User;
	std::cout << "Enter a 2 digit number >>>" << std::endl;
	std::cin >> sixth_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> seventh_Number_Chosen_By_User;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> eighth_Number_Chosen_By_User;
	std::cout << "Enter a 2 digit number >>>" << std::endl;
	std::cin >> ninth_Number_Chosen_By_User;


	the_Result_Of_A_Plus_B_Minus_C = first_Number_Chosen_By_User + second_Number_Chosen_By_User - third_Number_Chosen_By_User;
	the_Result_Of_D_times_E_minus_f = fourth_Number_Chosen_By_User * fifth_Number_Chosen_By_User - sixth_Number_Chosen_By_User;
	the_Result_Of_G_times_H_Plus_I = seventh_Number_Chosen_By_User * eighth_Number_Chosen_By_User + ninth_Number_Chosen_By_User;


	std::cout << "The " << color << " " << body_Part_Plural << " of the " << animal << " are really quite special." << std::endl;
	std::cout << "They help the " << animal << " travel incredible distances in very" << std::endl;
	std::cout << "little time, helping it become the " << word_Est << " " << animal << " of all time." << std::endl;
	std::cout << "The " << animal << " uses its " << the_Result_Of_A_Plus_B_Minus_C << " " << body_Part_Plural << " to quickly cover" << std::endl;
	std::cout << the_Result_Of_D_times_E_minus_f << " miles in " << the_Result_Of_G_times_H_Plus_I << " seconds." << std::endl;
	
	system("Pause");
		return 0;
}