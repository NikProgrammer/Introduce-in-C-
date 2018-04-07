#pragma once
# include <cstdint>
# include <string>

class Student
{
public:

	Student();
	~Student();

	std::string Name();
	Student &	Name(std::string name);

	std::string LastName();
	Student &	LastName(std::string lastname);

	std::string Surname();
	Student &	Surname(std::string surname);

	uint8_t		Age();
	Student &	Age(uint8_t age);

	uint8_t		Height();
	Student &	Height(uint8_t height);

	uint8_t		Weight();
	Student &	Weight(uint8_t weight);



private:

	uint8_t age;
	uint8_t height;
	uint8_t weight;
	std::string name;
	std::string lastName;
	std::string surname;
};
