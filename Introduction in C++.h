#pragma once
# include <cstdint>
# include <string>

class Student
{
public:

	Student();
	~Student();

	std::string getName();
	void setName(std::string name);

	std::string getLastName();
	void setLastName(std::string lastname);

	std::string getSurname();
	void setSurname(std::string surname);

	uint8_t getAge();
	void setAge(uint8_t age);

	uint8_t getHeight();
	void setHeight(uint8_t height);

	uint8_t getWeight();
	void setWeight(uint8_t weight);



private:

	uint8_t age;
	uint8_t height;
	uint8_t weight;
	std::string name;
	std::string lastName;
	std::string surname;
};
