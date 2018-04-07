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
		<< std::setw(10 * 6) << std::setfill('-') << "" << std::endl << std::setfill(' ');
	std::cout
		<< std::setw(3)  << "1."
		<< std::setw(12)  << student.getLastName()
		<< std::setw(12) << student.getName()
		<< std::setw(12) << student.getSurname()
		<< std::setw(12) << (uint32_t)student.getAge()
		<< std::setw(12) << (uint32_t)student.getHeight()
		<< std::setw(12) << (uint32_t)student.getWeight()
		<< std::endl;

	return 0;
}