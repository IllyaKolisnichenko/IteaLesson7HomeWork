#include "Vector.h"
#include <iostream>
#include <cstdlib>

Vector::Vector(int size)
{
	size_ = size;
	vectorOfData_ = new int[size_ * 2]{}; //reserve twice as much memory
}

Vector::~Vector()
{
	delete[] vectorOfData_;
}

int Vector::max()
{
	int max{ *vectorOfData_ };
	for (int i{}; i < size_; i++)
	{
		if (max < *(vectorOfData_ + i))
		{
			max = *(vectorOfData_ + i);
		}
	}
	return max;
}

int Vector::min()
{
	int min{ *vectorOfData_ };
	for (int i{}; i < size_; i++)
	{
		if (min > *(vectorOfData_ + i))
		{
			min = *(vectorOfData_ + i);
		}
	}
	return min;
}

void Vector::sort()
{
	for (int i{}; i < size_; i++)
	{
		for (int j{ i + 1 }; j < size_; j++)
		{
			if (*(vectorOfData_ + j) < *(vectorOfData_ + i))
			{
				std::swap(*(vectorOfData_ + i), *(vectorOfData_ + j));
			}
		}
	}
}

void Vector::swap(int firstElement, int secondElement)
{
	if ((firstElement > size_) || (secondElement > size_))
	{
		std::cout << "Elements cannot be swapped" << std::endl;
		return;
	}
	int tempElement = *(vectorOfData_ + firstElement - 1);
	*(vectorOfData_ + firstElement - 1) = *(vectorOfData_ + secondElement - 1);
	*(vectorOfData_ + secondElement - 1) = tempElement;
}

void Vector::resize(int size)
{
	if (size < (size_ * 2))
	{
		size_ = size; //new size of vector
	}
	else
	{
		int* tempVectorOfData_ = new int[size * 2]{}; //reserve twice as much memory
		{
			for (int i{}; i < size_; i++)
			{
				*(tempVectorOfData_ + i) = *(vectorOfData_ + i);
			}
		}

		delete[] vectorOfData_;
		size_ = size;                     //new size of vector
		vectorOfData_ = new int[size_ * 2]; //reserve twice as much memory

		for (int i{}; i < size_; i++)
		{
			*(vectorOfData_ + i) = *(tempVectorOfData_ + i);
		}
		delete[] tempVectorOfData_;
	}
}


int Vector::front()
{
	return *vectorOfData_;
}

int Vector::back()
{
	return *(vectorOfData_ + size_ - 1);
}

void Vector::printVector()
{
	for (int i{}; i < size_; i++)
	{
		std::cout << *(vectorOfData_ + i) << " ";
	}
	std::cout << std::endl;
}

void Vector::pushBack(int value)
{
	size_++;
	resize(size_);
	*(vectorOfData_ + size_ - 1) = value;
}
void Vector::append(int value, int position)
{
	if (position > size_ + 1)
	{
		std::cout << "Element cannot append to vector" << std::endl;
		return;
	}
	int* tempVectorOfData_ = new int[size_ + 1]{}; //reserve twice as much memory

	for (int i{}; i < (position - 1); i++)
	{
		*(tempVectorOfData_ + i) = *(vectorOfData_ + i);
	}

	*(tempVectorOfData_ + position - 1) = value;

	for (int i{ position - 1 }; i < size_; i++)
	{
		*(tempVectorOfData_ + i + 1) = *(vectorOfData_ + i);
	}

	Vector::~Vector();
	size_++;                             //new size of vector
	vectorOfData_ = new int[size_ * 2]; //reserve twice as much memory

	for (int i{}; i < size_; i++)
	{
		*(vectorOfData_ + i) = *(tempVectorOfData_ + i);
	}
	delete[] tempVectorOfData_;
}

int Vector::size()
{
	return size_;
}

void Vector::clear()
{
	for (int i{ 0 }; i < size_; i++)
	{
		*(vectorOfData_ + i) = 0;
	}
}
