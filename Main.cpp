#include <Introduction in C++.h>
#include<iomanip>
#include <iostream>

int main()
{
	Okhotnik General;
	General.Name("Mikhalich").MiddleName("123").LastName("General").Age(45).Height(171).Weight(81);
	
	Okhotnik Semenych;
	Semenych.Name("Semen").MiddleName("Semenych").Age(43).Height(175).Weight(79);

	Okhotnik Kuzmich;
	Kuzmich.Name("Kuzmich").Age(43).Height(183).Weight(89);

	std::cout
		<< std::setw(15) << "Lastname"
		<< std::setw(15) << "Name"
		<< std::setw(15) << "Surname"
		<< std::setw(15) << "Age"
		<< std::setw(15) << "Height"
		<< std::setw(15) << "Weight"
		<< std::endl
		<< std::setw(15 * 6) << std::setfill('-') << "" << std::endl << std::setfill(' ');
	std::cout
		<< std::setw(3)  << "1."
		<< std::setw(12) << General.LastName()
		<< std::setw(15) << General.Name()
		<< std::setw(15) << General.MiddleName()
		<< std::setw(15) << (uint32_t)General.Age()
		<< std::setw(15) << (uint32_t)General.Height()
		<< std::setw(15) << (uint32_t)General.Weight()
		<< std::endl;
	std::cout
		<< std::setw(3) << "2."
		<< std::setw(12) << Semenych.LastName()
		<< std::setw(15) << Semenych.Name()
		<< std::setw(15) << Semenych.MiddleName()
		<< std::setw(15) << (uint32_t)Semenych.Age()
		<< std::setw(15) << (uint32_t)Semenych.Height()
		<< std::setw(15) << (uint32_t)Semenych.Weight()
		<< std::endl;
	std::cout
		<< std::setw(3) << "3."
		<< std::setw(12) << Kuzmich.LastName()
		<< std::setw(15) << Kuzmich.Name()
		<< std::setw(15) << Kuzmich.MiddleName()
		<< std::setw(15) << (uint32_t)Kuzmich.Age()
		<< std::setw(15) << (uint32_t)Kuzmich.Height()
		<< std::setw(15) << (uint32_t)Kuzmich.Weight()
		<< std::endl;

	return 0;
}