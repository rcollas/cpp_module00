#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

#define MAX_CONTACT 8

void safeGetLine(std::string& input);

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void printPhoneBook();
		void searchContact();
	private:
		Contact m_list[MAX_CONTACT];
		bool m_phoneBookIsEmpty;
		int m_listIndex;
		int m_contactCount;
};

#endif