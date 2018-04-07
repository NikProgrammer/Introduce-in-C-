#include <Introduction in C++.h>
#include<iomanip>
#include <iostream>

int main()
{
	Student student;

	std::cout
		<< std::setw(12) << "Lastname"
		<< std::setw(12) << "Name"
		<< std::setw(12) << "Surname"
		<< std::setw(12) << "Age"
		<< std::setw(12) << "Height"
		<< std::setw(12) << "Weight"
		<< std::endl
		<< std::setw(12 * 6) << std::setfill('-') << "" << std::endl << std::setfill(' ');
	std::cout
		<< std::setw(3)  << "1."
		<< std::setw(12)  << student.LastName()
		<< std::setw(12) << student.Name()
		<< std::setw(12) << student.Surname()
		<< std::setw(12) << (uint32_t)student.Age()
		<< std::setw(12) << (uint32_t)student.Height()
		<< std::setw(12) << (uint32_t)student.Weight()
		<< std::endl;

	return 0;
}