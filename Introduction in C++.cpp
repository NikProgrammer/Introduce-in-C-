#include <Introduction in C++.h>

#include <iostream>

uint8_t Student::getAge()
{
	return this->age;
}

uint8_t Student::getHeight()
{
	return this->height;
}

uint8_t Student::getWeight()
{
	return this->weight;
}

std::string Student::getLastName()
{
	return this->lastName;
}

std::string Student::getName()
{
	return this->name;
}

std::string Student::getSurname()
{
	return this->surname;
}

void Student::setAge(uint8_t age)
{
	this->age = age;
}

void Student::setHeight(uint8_t height)
{
	this->height = height;
}

void Student::setWeight(uint8_t weight)
{
	this->weight = weight;
}

void Student::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setSurname(std::string surname)
{
	this->surname = surname;
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

