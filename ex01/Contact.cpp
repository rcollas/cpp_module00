#include "Contact.hpp"

Contact::Contact()
    :	m_firstName("Jean"),
		m_lastName("Dupont"),
    	m_nickName("Janneau"),
		m_phoneNumber("06.19.50.59.52"),
		m_darkestSecret("Too sweet") {}

Contact::Contact(const std::string &firstName,
				 const std::string &lastName,
				 const std::string &nickName)
				 :	m_firstName(firstName),
					m_lastName(lastName),
					m_nickName(nickName) {}

std::string truncate(const std::string &str, int width) {
  if (str.length() > (unsigned int)width)
    return str.substr(0, width - 1) + ".";
  return str;
}

void Contact::fillInfo() {

	std::cout << "First name : ";
	safeGetLine(m_firstName);
	std::cout << "Last name : ";
	safeGetLine(m_lastName);
	std::cout << "Nick name : ";
	safeGetLine(m_nickName);
	std::cout << "Phone number : ";
	safeGetLine(m_phoneNumber);
	std::cout << "Darkest secret : ";
	safeGetLine(m_darkestSecret);
}

void Contact::printSummarizeContact(int index) const {

  std::cout << std::setw(10);
  std::cout << index;
  std::cout << "|";
  std::cout << std::setw(10);
  std::cout << truncate(m_firstName, 10);
  std::cout << "|";
  std::cout << std::setw(10);
  std::cout << truncate(m_lastName, 10);
  std::cout << "|";
  std::cout << std::setw(10);
  std::cout << truncate(m_nickName, 10) << std::endl;
}

void Contact::printContact() const {

	std::cout << "First name : " << m_firstName << std::endl;
	std::cout << "Last name : " << m_lastName << std::endl;
	std::cout << "Nick name : " << m_nickName << std::endl;
	std::cout << "Phone number : " << m_phoneNumber << std::endl;
	std::cout << "Darkest secret : " << m_darkestSecret << std::endl;
}

Contact::~Contact() {}
