#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_list(), m_contactCount(0)
{}

void PhoneBook::searchContact()
{

	if (m_contactCount == 0) {
		std::cout << "The phonebook is empty" << std::endl;
	}
	else {
		PhoneBook::printPhoneBook();
		std::string input;
		std::cin >> input;
	}
}

void PhoneBook::addContact()
{
	Contact	newContact;

	m_list[m_contactCount] = newContact;
	newContact.setIndex(m_contactCount);
	std::string input;
	std::cout << "First name : "; std::cin >> input;
	newContact.setFirstName(input);
	std::cout << "Last name : ";  std::cin >> input;
	newContact.setLastName(input);
	std::cout << "Nick name : "; std::cin >> input;
	newContact.setNickName(input);
	m_list[m_contactCount] = newContact;
	if (m_contactCount + 1 < MAX_CONTACT)
		m_contactCount++;
}

void PhoneBook::printPhoneBook()
{
	int	i = -1;
	//for (int i = 0; i < m_contactCount; i++) {
	//	m_list[i].printContact();
	//}
	while (++i < m_contactCount) {
		m_list[i].printContact();
	}
}

int PhoneBook::getContactCount()
{
	return m_contactCount;
}

PhoneBook::~PhoneBook()
{}