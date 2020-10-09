#pragma once
#include "Persoon.h"

class Student : public Persoon
{
public:
	float m_hoursOfSleep{};

	Student(float hoursOfSleep = 0.0) : m_hoursOfSleep{ hoursOfSleep }
	{

	}

	void PrintStudentValues() const
	{
		cout << "Naam: " << m_name << '\n';
		cout << "Leeftijd: " << m_age << '\n';
		cout << "Dagelijkse hoeveelheid slaap: " << m_hoursOfSleep << " uur" <<'\n';
		cout << "" << '\n';
	}
};
