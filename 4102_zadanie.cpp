#include <iostream>

int main()
{
	std::cout << "Sprawdzamy ilosc pamieci zajmowanej przez: " << "\n";
	
	std::cout << "int*: " << sizeof(int*) << "\n";
	std::cout << "char*: " << sizeof(char*) << "\n";
	std::cout << "uint16_t*: " << sizeof(uint16_t*) << "\n";
	std::cout << "std::string: " << sizeof(std::string) << "\n";
	
	
	
return 0;
}
