#pragma once
#include "Persoon.h"

class Docent : public Persoon
{
public:
	int m_annoyingStudents{};

	Docent(int annoyingStudents = 0) : m_annoyingStudents{ annoyingStudents }
	{

	}

	void PrintDocentValues() const
	{
		cout << "Naam: " << m_name << '\n';
		cout << "Leeftijd: " << m_age << '\n';
		cout << "Vervelende leerlingen: " << m_annoyingStudents << '\n';
		cout << "" << '\n';
	}
};