#include "Contact.hpp"

Contact::Contact()
    : m_index(0), m_firstName("Jean"), m_lastName("Dupont"),
      m_nickName("Janneau") {}

Contact::Contact(int index, std::string firstName, std::string lastName,
                 std::string nickName)
    : m_index(index), m_firstName(firstName), m_lastName(lastName),
      m_nickName(nickName) {}

std::string truncate(std::string str, int width) {
  if (str.length() > (unsigned int)width)
    return str.substr(0, width - 1) + ".";
  return str;
}

void Contact::updateIndex(int newIndex)
{
	m_index = newIndex;
}

void Contact::printContact() {
  std::cout << std::setw(10);
  std::cout << m_index;
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

Contact::~Contact() {}
