#include "vectors.h"
#include <iostream>


int main()
{
	std::cout << "Enter the numbers" << std::endl;
	Vector vector(5);
	vector.init();
	std::cout << std::endl;
	vector.printVector();
	std::cout << std::endl;
	vector.max();
	std::cout << std::endl;
	vector.min();

	return 0;
}
