#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
					:	m_list(),
						m_phoneBookIsEmpty(true),
						m_listIndex(0),
						m_contactCount(0)
{}

bool isInt(std::string str) {

	return str.length() == 1 && str[0] >= '1'
				&& str[0] <= '8';
}

void PhoneBook::searchContact()
{
	std::string input;

	if (m_phoneBookIsEmpty) {
		std::cout << "The phonebook is empty" << std::endl;
	}
	else {
		PhoneBook::printPhoneBook();
		safeGetLine(input);
		if (isInt(input) && atoi(input.c_str()) >= 1 && atoi(input.c_str()) <=
		m_contactCount)
			m_list[atoi(input.c_str()) - 1].printContact();
		else
			std::cout << "Value " << input << " doesn't match any index" <<
					  std::endl;
	}
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
