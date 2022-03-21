#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_list(), m_contactNumber(0)
{}

void PhoneBook::addContact(Contact newContact)
{
	newContact.updateIndex(m_contactNumber);
	m_list[m_contactNumber] = newContact;
	if (m_contactNumber + 1 < MAX_CONTACT)
		m_contactNumber++;
}

void PhoneBook::printPhoneBook()
{
	for (int i = 0; i <= m_contactNumber; ++i) {
		m_list[i].printContact();
	}
}

PhoneBook::~PhoneBook()
{}