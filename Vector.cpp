#include <iostream>
#include "vector.h"

Vector::Vector(int size)
{
	size_ = size;
	vectorOfData_ = new int [size]{};
}

Vector::~Vector()
{
	delete[] vectorOfData_;
}
void Vector::init()
{
	for (int i = 0; i < size_; i++)
	{
		std::cin >> vectorOfData_[i];
	}
}
void Vector::sort()
{
	for (int i = 0; i < size_ - 1; i++)
	{
		for (int j = 0; j < size_ - i - 1; j++)
		{
			if (vectorOfData_[j] > vectorOfData_[j + 1])
			{
				int temp = vectorOfData_[j];
				vectorOfData_[j] = vectorOfData_[j + 1];
				vectorOfData_[j + 1] = temp;
			}
		}
	}
}

void Vector::max()
{
	sort();
	
	std::cout << vectorOfData_[size_ - 1] << std::endl;
}

void Vector::min()
{
	sort();

	std::cout << vectorOfData_[0] << std::endl;
}

void Vector::swap(int firstElement, int secondElement)
{
	if ((firstElement > size_) || (secondElement > size_))
	{
		std::cout << "Elements cannot be swapped" << std::endl;
		return;
	}
	int temp = vectorOfData_[firstElement];
	vectorOfData_[firstElement] = vectorOfData_[secondElement];
	vectorOfData_[secondElement] = temp;
}

void Vector::resize(int size)
{
	int* tempVector = new int[size];
	if (size>=size_)
	{
		for (int i = 0; i < size-(size-size_); i++)
		{
			tempVector[i] = vectorOfData_[i];
		}
		delete vectorOfData_;
		vectorOfData_ = tempVector;
		size_ += (size - size_);
	}
	else
	{
		for (int i = 0; i < size_; i++)
		{
			tempVector[i] = vectorOfData_[i];
		}
		delete vectorOfData_;
		vectorOfData_ = tempVector;
		size_ -= (size - size_);
	}
}

void Vector::front()
{
	std::cout << vectorOfData_[0] << std::endl;
}

void Vector::back()
{
	std::cout << vectorOfData_[size_ - 1] << std::endl;
}

void Vector::printVector()
{
	for (int i = 0; i < size_; i++)
	{
		std::cout << vectorOfData_[i] << " ";
	}
	std::cout << std::endl;
}

void Vector::pushBack(int value)
{
	size_++;
	resize(size_);
	vectorOfData_[size_ - 1] = value;
}
void Vector::append(int value, int position)
{
	//empty
}

void Vector::size()
{
	std::cout<< sizeof(vectorOfData_)<<std::endl;
}

void Vector::clear()
{
	delete vectorOfData_;
	int* vectorOfData = new int[size_];
}