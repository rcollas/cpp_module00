#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <stdlib.h>

void welcomeMessage()
{
	std::cout << "********** PHONEBOOK **********" << std::endl;
	std::cout << "****** ADD, ";
	std::cout << "SEARCH, ";
	std::cout << "EXIT ******" << std::endl;
	std::cout << "*******************************" << std::endl;
}

bool containsOnlySpaces(std::string str) {

	std::string spaces = " \t\n\v\f\r";

	return str.find_first_not_of(spaces)
			== std::string::npos;
}

void safeGetLine(std::string& input) {

	std::getline(std::cin, input);
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
		exit(EXIT_FAILURE);
	}
	else if (input.empty() || containsOnlySpaces(input)) {
		std::cout << "Empty line, please enter a value: ";
		safeGetLine(input);
	}
}

void selectItem(PhoneBook myPhoneBook)
{
	while (true) {
		welcomeMessage();
		std::string input;
		safeGetLine(input);
		if (input == "ADD")
			myPhoneBook.addContact();
		else if (input == "SEARCH")
			myPhoneBook.searchContact();
		else if (input == "EXIT")
			return ;
		else
			std::cout << "Invalid command" << std::endl;
	}
}

int main()
{
	PhoneBook myPhoneBook;

	selectItem(myPhoneBook);
	return (0);
}
