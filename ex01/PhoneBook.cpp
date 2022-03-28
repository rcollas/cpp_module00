#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
					:	m_list(),
						m_phoneBookIsEmpty(true),
						m_listIndex(0),
						m_contactCount(0)
{}

void PhoneBook::searchContact()
{
	int input = 0;

	if (m_phoneBookIsEmpty) {
		std::cout << "The phonebook is empty" << std::endl;
	}
	else {
		PhoneBook::printPhoneBook();
		std::cin >> input;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a valid integer" << std::endl;
			std::cin >> input;
		}
	}
	if (input >= 1 && input <= m_contactCount)
		m_list[input - 1].printContact();
	else
		std::cout << "Value " << input << " doesn't match any index" <<
		std::endl;
}

void PhoneBook::addContact()
{
	Contact	newContact;

	m_phoneBookIsEmpty = false;
	newContact.fillInfo();
	m_list[m_listIndex] = newContact;
	m_listIndex++;
	if (m_listIndex == MAX_CONTACT)
		m_listIndex = 0;
	if (m_contactCount != MAX_CONTACT)
		m_contactCount++;
}

void PhoneBook::printPhoneBook()
{
	for (int i = 0; i < this->m_contactCount; i++) {
		m_list[i].printSummarizeContact(i + 1);
	}
}

PhoneBook::~PhoneBook() {}
