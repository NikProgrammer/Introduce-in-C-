# pragma warning(disable:4996)
#include <Introduction in C++.h>

#include <iostream>

uint8_t Okhotnik::Age()
{
	return this->age;
}

uint8_t Okhotnik::Height()
{
	return this->height;
}

uint8_t Okhotnik::Weight()
{
	return this->weight;
}

std::string Okhotnik::LastName()
{
	return this->lastName;
}

std::string Okhotnik::Name()
{
	return this->name;
}

std::string Okhotnik::MiddleName()
{
	return this->middleName;
}

Okhotnik & Okhotnik::Age(uint8_t age)
{
	if ((age <= 0) || (age > 120))
		return (*this);
	this -> age = age;
	return (*this);
}

Okhotnik & Okhotnik::Height(uint8_t height)
{
	if ((height <= 0) || (height > 255))
		return (*this);
	this->height = height;
	return (*this);
}

Okhotnik & Okhotnik::Weight(uint8_t weight)
{
	if ((weight <= 0) || (weight > 255))
		return (*this);
	this->weight = weight;
	return (*this);
}

Okhotnik & Okhotnik::LastName(std::string lastName)
{	/*если строка пустая*/
	if (lastName.empty())
		this->lastName = "Nu, vyp'em!";
		return(*this);
	/* Проверка: все символы — буквы */
	for (size_t i = 0; i < lastName.size(); i++)
	{
		if (!isalpha(lastName[i]))
			this->lastName = "Nu, vyp'em!";
			return (*this);
	}
	/*выделение памяти по строковый массив размером name*/
	char *tempstr = (char*)malloc(lastName.size()+1);
	/*копирование строки во временный строковый массив. c_str - возвращает стандартный сишный массив символов*/
	strcpy(tempstr, lastName.c_str());
	/*переводим все символы в нижний регистр*/
	strlwr(tempstr);
	/*первый символ делаем заглавным*/
	tempstr[0] = toupper(tempstr[0]);
	this->lastName = std::string(tempstr);

	free(tempstr);

	return (*this);
}

Okhotnik & Okhotnik::Name(std::string name)
{
	/*если строка пустая*/
	if (name.empty())
	{
		this->name = "Nu, vyp'em!";
		return (*this);
	}
	/* Проверка: все символы — буквы */
	for (size_t i = 0; i < name.size(); i++)
	{
		if (!isalpha(name[i]))
		{
			this->name = "Nu, vyp'em!";
			return(*this);
		}
	}
	/*выделение памяти по строковый массив размером name*/
	char *tempstr = (char*)malloc(name.size()+1);
	/*копирование строки во временный строковый массив. c_str - возвращает стандартный сишный массив символов*/
	strcpy(tempstr, name.c_str());
	/*переводим все символы в нижний регистр*/
	strlwr(tempstr);
	/*первый символ делаем заглавным*/
	tempstr[0] = toupper(tempstr[0]);
	this->name = std::string(tempstr);

	free(tempstr);

	return (*this);
}

Okhotnik & Okhotnik::MiddleName(std::string middleName)
{
	/*если строка пустая*/
	if (middleName.empty())
	{
		this->middleName = "Nu, vyp'em!";
		return (*this);
	}
	/* Проверка: все символы — буквы */
	for (size_t i = 0; i < middleName.size(); i++)
	{
		if (!isalpha(middleName[i]))
		{
			this->middleName = "Nu, vyp'em!";
			return(*this);
		}
	}
	/*выделение памяти по строковый массив размером name*/
	char *tempstr = (char*)malloc(middleName.size()+1);
	/*копирование строки во временный строковый массив. c_str - возвращает стандартный сишный массив символов*/
	strcpy(tempstr, middleName.c_str());
	/*переводим все символы в нижний регистр*/
	strlwr(tempstr);
	/*первый символ делаем заглавным*/
	tempstr[0] = toupper(tempstr[0]);
	this->middleName = std::string(tempstr);

	free(tempstr);

	return (*this);
}

Okhotnik::Okhotnik()
{
	this->age = 42;
	this->height = 783;
	this->weight = 79;

	this->name = "Nu, vyp'em!";
	this->lastName = "Nu, vyp'em!";
	this->middleName = "Nu, vyp'em!";
}

//Okhotnik::Okhotnik (uint8_t Age, uint8_t Height, uint8_t Weight, const std::string & Name,
//	const std::string & Lastname, const std::string & Surname)
//{
//	this->age = Age;
//	this->height = Height;
//	this->name = Name;
//	this->lastName = Lastname;
//	this->middleName = Surname;
//	this->weight = Weight;
//}

Okhotnik::~Okhotnik() {};

