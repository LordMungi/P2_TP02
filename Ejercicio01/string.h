#pragma once
#include <vector>

class string
{
private: 

	std::vector<char> text;

public:

	string(const char* text);
	
	char* toCharArray();
	void print();
};

