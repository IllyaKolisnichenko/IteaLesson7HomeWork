// lesson7Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include "Vector.h"

const int sizeArr{ 10 };
Vector myVect(sizeArr);


int main()
{
	myVect.init(0, 100);
	std::cout << "----------------- your vector---------------------"<<"\n";
	myVect.printVector();
	std::cout << "\n";
	std::cout << "----------------- sort vector---------------------" << "\n";
	myVect.sort(0, myVect.size()-1);
	myVect.printVector();
	std::cout << "\n";
	std::cout << "----------------- pushback value---------------------"<<"\n";
	myVect.pushBack(45);
	myVect.printVector();
	std::cout << "\n";
	std::cout << "----------------- resize array---------------------"<<"\n";
	myVect.resize(6);
	myVect.printVector();
	std::cout << "\n";
	std::cout << "----------------- resize array---------------------" << "\n";
	myVect.resize(20);
	myVect.printVector();
	std::cout << "\n";
	std::cout << "----------------- size of Vector---------------------"<<"\n";
	std::cout<<myVect.size();
	std::cout << "\n";
	std::cout << "----------------------------------------------------" << "\n";
	std::cout << "max Element - " << myVect.max() << "\n";
	std::cout << "min Element - " << myVect.min() << "\n";
	std::cout << "----------------- to append value---------------------" << "\n";
	myVect.append(100, 7);
	myVect.printVector();
	std::cout << "\n";
	std::cout<<myVect.size();
	std::cout << "\n";
	std::cout << "----------------- sort vector---------------------" << "\n";
	myVect.sort(0, myVect.size() - 1);
	myVect.printVector();
	myVect.~Vector();

	




}
