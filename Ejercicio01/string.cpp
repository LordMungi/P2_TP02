#include "string.h"
#include <iostream>

string::string(const char* text)
{
	int i = 0;
	while (text[i] != '\0')
	{
		this->text.push_back(text[i]);
		i++;
	}
}

char* string::toCharArray()
{
	char* output = new char[text.size()];
	int i = 0;

	for (char c : text)
	{		
		output[i] = c;
		i++;
	}

	return output;
}

void string::print()
{
	for (char c : text)
	{
		std::cout << c;
	}
	std::cout << std::endl;
}
