#pragma once
#include <ostream>

class List 
{
public:
	List();

	void init(int length);

	void Print(std::ostream& os);

	void add(char x);};
