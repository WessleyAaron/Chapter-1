//Delgados Tacos
//03/28/18
//Aaron Wessley

#include <iostream>
#include <string>


int main()
{

	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supreme_Burrito = 4.50;
	double potato_Olè = 1.99;
	double quesadilla = 1.99;
	double guacamole = 1.99;
	double tacos_Ordered, burritos_Ordered, enchiladas_Ordered, tostadas_Ordered, drink_Ordered, 
		churro_Ordered, supreme_Burrito_Ordered, potato_Olè_Ordered, quesadilla_Ordered, guacamole_Ordered;
	double total;

	std::cout << " ______________________________________________________" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|            ____________________________       _______|" << std::endl;
	std::cout << "|           |                            |     |       |" << std::endl;
	std::cout << "|           |        Welcome to          |     |       |" << std::endl;
	std::cout << "|           |      Delgados Tacos        |     |       |" << std::endl;
	std::cout << "|           |                            |     |_______|" << std::endl;
	std::cout << "|           |                            |     |       |" << std::endl;
	std::cout << "|           |____________________________|     | _     |" << std::endl;
	std::cout << "|                                              |_______|" << std::endl;
	std::cout << "|    ________                                    ____  |" << std::endl;
	std::cout << "|   |  0000  |                            0000   ______|" << std::endl;
	std::cout << "|___| 0    0 |___________________________0    0________|" << std::endl;
	std::cout << "     0      0                           0      0 " << std::endl;
	std::cout << "      0    0                             0    0 " << std::endl;
	std::cout << "       0000                               0000 " << std::endl;

	std::cout << "How many tacos would you like? >>>" << std::endl;
	std::cin >> tacos_Ordered;

	std::cout << "How many burritos would you like ? >>>" << std::endl;
	std::cin >> burritos_Ordered;

	std::cout << "How many enchiladas would you like? >>>" << std::endl;
	std::cin >> enchiladas_Ordered;

	std::cout << "How many tostadas would you like? >>>" << std::endl;
	std::cin >> tostadas_Ordered;

	std::cout << "How many drinks would you like? >>>" << std::endl;
	std::cin >> drink_Ordered;

	std::cout << "How many churros would you like >>>" << std::endl;
	std::cin >> churro_Ordered;

	std::cout << "How many surpreme burritos would you like? >>>" << std::endl;
	std::cin >> supreme_Burrito_Ordered;

	std::cout << "How many potato olès would you like? >>>" << std::endl;
	std::cin >> potato_Olè_Ordered;

	std::cout << "How many quesadillas would you like? >>>" << std::endl;
	std::cin >> quesadilla_Ordered;

	std::cout << "How many orders of guacamole would you like ? >>>" << std::endl;
	std::cin >> guacamole_Ordered;



	total = (tacos * tacos_Ordered) + (burritos * burritos_Ordered) + (enchiladas * enchiladas_Ordered) + (tostadas * tostadas_Ordered) + 
		(drink * drink_Ordered) + (churro + churro_Ordered) + (supreme_Burrito * supreme_Burrito_Ordered) + (potato_Olè * potato_Olè_Ordered) + 
		(quesadilla * quesadilla_Ordered) + (guacamole * guacamole_Ordered);

	std::cout << "Your total is >>> $" << total << std::endl;
	std::cout << "Credit Cards not accepted" << std::endl;
	std::cout << "Cash only" << std::endl;

	system("pause");
	return 0;
}