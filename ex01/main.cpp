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
	while (1) {
		welcomeMessage();
		std::string input;
		std::cin >> input;
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

int main(void)
{
	PhoneBook myPhoneBook;

	myPhoneBook.printPhoneBook();
	selectItem(myPhoneBook);
	return (0);
}
