#pragma once
#include <string>

using namespace std;

class Persoon
{

public:
	string m_name{};
	int m_age{};

	Persoon(const string name = "", int age = 0) : m_name{ name }, m_age{ age }
	{
		
	}

	const string getName() const 
	{ 
		return m_name; 
	}

	int getAge() const 
	{ 
		return m_age; 
	}
};
