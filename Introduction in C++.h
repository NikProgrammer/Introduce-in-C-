#pragma once
# include <cstdint>
# include <string>

class Okhotnik
{
public:

	Okhotnik();
	/*Okhotnik(uint8_t Age, uint8_t Height, uint8_t Weight, const std::string & Name,
		const std::string & Lastname, const std::string & MiddleName);*/
	~Okhotnik();

	std::string Name();
	Okhotnik &	Name(std::string name);

	std::string LastName();
	Okhotnik &	LastName(std::string lastname);

	std::string MiddleName();
	Okhotnik &	MiddleName(std::string middleName);

	uint8_t		Age();
	Okhotnik &	Age(uint8_t age);

	uint8_t		Height();
	Okhotnik &	Height(uint8_t height);

	uint8_t		Weight();
	Okhotnik &	Weight(uint8_t weight);

private:

	uint8_t age;
	uint8_t height;
	uint8_t weight;
	std::string name;
	std::string lastName;
	std::string middleName;
};
