#pragma once
#include <string>

struct Student
{
	std::string Name;
	int Grade;
};

std::string getStudentData(const Student *student);

void mergeSortStudents(Student *persons, int arraySize);