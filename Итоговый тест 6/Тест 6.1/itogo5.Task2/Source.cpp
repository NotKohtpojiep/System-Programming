#include "Header.h"

void mergeSortStudents(Student* persons, int arraySize)
{
	bool isAlright = false;
	while (isAlright != true)
	{
		isAlright = true;
		for (int i = 1; i < arraySize; ++i)
		{
			if (persons[i - 1].Grade < persons[i].Grade)
			{
				Student temp = persons[i];
				persons[i] = persons[i - 1];
				persons[i - 1] = temp;
				//std::swap(array[i - 1], array[i]);
				isAlright = false;
			}
		}
	}
}

std::string getStudentData(const Student* student)
{
	return student->Name + " got a grade of " + std::to_string(student->Grade);
}