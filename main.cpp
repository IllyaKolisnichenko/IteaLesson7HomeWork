#include "vector.h"
#include <iostream>


int main()
{
	std::cout << "Enter the numbers" << std::endl;
	Vector vector(5);
	vector.init();
	vector.printVector();
	vector.sort();
	vector.printVector();
	vector.min();
	vector.max();
	vector.size();
	vector.swap(1, 2);
	vector.printVector();
	vector.printVector();
	vector.back();
	vector.front();

	return 0;
}
