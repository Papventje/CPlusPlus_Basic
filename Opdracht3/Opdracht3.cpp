#include <iostream>
#include "Docent.h"
#include "Student.h"

int main()
{
    Student student{ 5 };
    student.m_name = "Niels";
    student.m_age = 24;

    student.PrintStudentValues();

    Docent docent{ 12 };
    docent.m_name = "Joop";
    docent.m_age = 41;

    docent.PrintDocentValues();
}
