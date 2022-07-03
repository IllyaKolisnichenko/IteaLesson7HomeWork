#include "Vector.h"
#include <iostream>
#include <cstdlib>

void testVector() {
	Vector vector{ 20 };

	std::srand(time(nullptr));
	for (int i{}; i < vector.size(); i++)
	{
		*(vector.vectorOfData_ + i) = 1 + std::rand() % 100; //initializing vector, random nubber from 1 to 100
	}

	vector.printVector();

	std::cout << "Maximun number is " << vector.max() << std::endl;
	std::cout << "Minimum number is " << vector.min() << std::endl;

	vector.sort();
	std::cout << "Vector after sort: ";
	vector.printVector();

	vector.swap(1, 10);
	std::cout << "Vector after swap: ";
	vector.printVector();

	vector.resize(25);
	std::cout << "Vector after resize: ";
	vector.printVector();

	std::cout << "Size of vector: " << vector.size() << " elements" << std::endl;
	std::cout << "Front element of vector: " << vector.front() << std::endl;
	std::cout << "Back element of vector " << vector.back() << std::endl;

	vector.pushBack(100);
	std::cout << "Vector after pushBack: ";
	vector.printVector();

	std::cout << "Size of vector: " << vector.size() << " elements" << std::endl;

	vector.append(500, 8);
	std::cout << "Vector after append: ";
	vector.printVector();

	vector.clear();
	std::cout << "Vector after clear: ";
	vector.printVector();
}

int main()
{
	testVector();
	system("pause");
	return 0;
}
