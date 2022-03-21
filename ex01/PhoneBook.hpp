#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACT 8

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(const Contact newContact);
		void printPhoneBook();
	private:
		Contact m_list[MAX_CONTACT];
		int m_contactNumber;
};

#endif