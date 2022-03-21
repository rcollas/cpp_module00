#include <iostream>
#include <sstream>

std::string	capitalize(const std::string &str)
{
	std::string	capitalize_str(str.begin(), str.end());

	for (int i = 0; i < (int)str.length(); i++)
		capitalize_str[i] = std::toupper(str[i]);
	return (capitalize_str);
}

std::string	trimSpaces(const std::string &str)
{
	std::istringstream	stream(str);
	std::string word;
	std::string	trimStr;

	while (stream >> word) {
		if (!trimStr.empty()) {
			trimStr += ' ';
		}
		trimStr += word;
	}
	return (trimStr);
}

std::string	concatenate(char **str)
{
	std::string	output;

	for (int i = 1; str[i]; i++) {
		output += str[i];
		output += ' ';
	}
	return (output);
}

int	main(int argc, char **argv)
{
	std::string	output;

	if (argc == 1) {
		output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		output = trimSpaces(concatenate(argv));
	}
	std::cout << capitalize(output) << std::endl;
	return (0);
}