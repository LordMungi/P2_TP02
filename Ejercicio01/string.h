#pragma once
#include <vector>

class string
{
private: 

	std::vector<char> text;

public:

	string(const char* text);
	
	const char* toCharArray();
	void print();
};

