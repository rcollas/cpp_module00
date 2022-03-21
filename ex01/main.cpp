#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	Contact contactTest(1, "Robin", "Collas", "rcollas");
	Contact longContactTest(1, "Romualdinoh", "De la Bonne Esperance",
							"Romumu");
	Contact defaultContact;
	PhoneBook myPhoneBook;

	myPhoneBook.addContact(contactTest);
	myPhoneBook.addContact(longContactTest);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(defaultContact);
	myPhoneBook.addContact(longContactTest);
	myPhoneBook.printPhoneBook();
	return (0);
}
