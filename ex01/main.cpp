#include "Contact.hpp"
#include "PhoneBook.hpp"

void welcomeMessage()
{
	std::cout << "Available commands : " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
}

void selectItem(PhoneBook myPhoneBook)
{
	while (true) {
		welcomeMessage();
		std::string input;
		std::cin >> input;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Input error" << std::endl;
		}
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
