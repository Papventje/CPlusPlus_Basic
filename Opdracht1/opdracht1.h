#pragma once

using namespace std;

class Timetable 
{
	int screenWidth;
	int screenHeight;

	int rows;
	int columns;

public: 
	Timetable(int w, int h, int r, int c);
};

class AddEntry 
{

public:
	void AddNode(string time, string classroomInfo);
};

class CurrentDate
{
	string date;
	string time;

	void GetCurrentTime();

public:
	void SetCurrentTime(); //Functie waar de tijd wordt doorgestuurd naar de AddNode functie
};

class ClassroomInfo
{
	string lessonName;
	string teacherName;
	string building;
	int floor;
	int classroomNumber;

public:
	void SetClassroomInfo(); //Functie waar de ingevoerde lesgegevens door worden gestuurd naar de AddNode functie
};


