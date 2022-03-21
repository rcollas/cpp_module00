#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Contact {
	public:
		Contact();
		~Contact();
		Contact(int index, std::string firstName, std::string lastName,
		        std::string nickName);
		void printContact();
		void updateIndex(int newIndex);

	private:
		int m_index;
		std::string m_firstName;
		std::string m_lastName;
		std::string m_nickName;
};

#endif
