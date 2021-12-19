#include <iostream>

int main()
{
	std::cout << "Sprawdzamy ilosc pamieci zajmowanej przez dane typy: " << "\n";
	
	std::cout << "Typ int: " << sizeof(int) << "\n";
	std::cout << "Typ char: " << sizeof(char) << "\n";
	std::cout << "Typ uint16_t: " << sizeof(uint16_t) << "\n";
	std::cout << "Typ uint32_t: " << sizeof(uint32_t) << "\n";
	std::cout << "Typ unsigned: " << sizeof(unsigned) << "\n";
	std::cout << "Typ long: " << sizeof(long) << "\n";
	std::cout << "Typ float: " << sizeof(float) << "\n";
	std::cout << "Typ double: " << sizeof(double) << "\n";
	std::cout << "Typ std::string: " << sizeof(std::string) << "\n";
	
return 0;
}
