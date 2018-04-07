#include <Introduction in C++.h>

#include <iostream>

uint8_t Student::Age()
{
	return this->age;
}

uint8_t Student::Height()
{
	return this->height;
}

uint8_t Student::Weight()
{
	return this->weight;
}

std::string Student::LastName()
{
	return this->lastName;
}

std::string Student::Name()
{
	return this->name;
}

std::string Student::Surname()
{
	return this->surname;
}

Student & Student::Age(uint8_t age)
{
	this->age = age;
	return (*this);
}

Student & Student::Height(uint8_t height)
{
	this->height = height;
	return (*this);
}

Student & Student::Weight(uint8_t weight)
{
	this->weight = weight;
	return (*this);
}

Student & Student::LastName(std::string lastName)
{
	this->lastName = lastName;
	return (*this);
}

Student & Student::Name(std::string name)
{
	this->name = name;
	return (*this);
}

Student & Student::Surname(std::string surname)
{
	this->surname = surname;
	return (*this);
}

Student::Student()
{
	this->age = 28;
	this->height = 174;
	this->weight = 71;
	this->age = 28;

	this->name = "Kolyan";
	this->lastName = "Novikov";
	this->surname = "Andreevich";
}
Student::~Student() {};

