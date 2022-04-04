#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>
#include <string>

void safeGetLine(std::string& input);

class Contact {
	public:
		Contact();
		~Contact();
		Contact(const std::string& firstName,
				const std::string& lastName,
		        const std::string& nickName);
		void printSummarizeContact(int index) const;
		void printContact() const;
		void fillInfo();

	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_nickName;
		std::string m_phoneNumber;
		std::string m_darkestSecret;
};

#endif
