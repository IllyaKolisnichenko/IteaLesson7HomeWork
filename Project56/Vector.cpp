
#include "Vector.h"
#include<iostream>

Vector::Vector( int size)
{
	size_ = size;
	vectorOfData_ = new int [size_]{};
	position1 = 0;                                                                 //std::vector<int>vector1{5,4,3,2,};
}

Vector::~Vector()
{
  delete[] vectorOfData_; 
}

int Vector::max()
{
  int max1 = vectorOfData_[0];
	for (int i = 0; i < size_; ++i){
		if (vectorOfData_[i] > max1)
		{
			max1 = vectorOfData_[i];
		}
    } std::cout << "max=" << max1;
     return max1;
}

int Vector::min()
{
	int min1 = vectorOfData_[0];
	for (int i = 0; i < size_; ++i){
		if (vectorOfData_[i] < min1)
		{
			min1 = vectorOfData_[i];
		}
	}
	std::cout << "min=" << min1;
    return min1;
}

void Vector::sort()
{
	for (int i = 0;i < size_;i++) {
	std::cout << vectorOfData_[i] << " ";
	}
	std::cout << "\n";
	{
		int accum = 0;
		for (int i = 0;i < size_;i++) {
			for (int j = 0;j < size_;j++) {
				if (vectorOfData_[j] < vectorOfData_[j - 1])
				{
					swap(vectorOfData_[j], vectorOfData_[j - 1]);
				}
			}
		}
	}
	for (int i = 0;i < size_;i++)
	{
		std::cout << vectorOfData_[i] << " ";
	}

}

void Vector::swap(int firstElement, int secondElement)
{
	                                  //int p = front();способ передачи другой функции в функцию но передаётся лишь первый элемент массива
}

void Vector::resize(int size)
{
	size_t newSize = size_ * 2;
	int* newArr = new int[newSize];
	memcpy(newArr, vectorOfData_, size_ * sizeof(int));
    size_ = newSize;
	delete[] vectorOfData_;
	vectorOfData_ = newArr;
	
}

int Vector::front()
{
    int front1 = 0;
	int val = vectorOfData_[0];
	front1 = val;
	std::cout << front1;
	return{ front1 };
}

int Vector::back()
{
	int back1 = 0;
	int val = vectorOfData_[size_ - 1];
	back1 = val;
	std::cout << back1;
	return{ back1 };
}

void Vector::printVector1()
{
	std::cout << " \n";
}

void Vector::printVector()
{
	std::cout << "array is:";
	for (int i = 0;i < size_;i++)    //используется for с целью пропустить цикл i  для вывода на консоль всего значение, но не первого элемента
		std::cout << vectorOfData_[i] << " ";
}

void Vector::pushBack(int value)
{
	if (position1 > size_)
		return;
	vectorOfData_[ position1] = value;
		position1++;
		std::cout << " ";
}
void Vector::append(int value, int position)
{
	if (position > size_) {
		std::cout << "You can`t do it!";
	}

	int* Arrau1 = new int[size_ + 1]{};
	for (int i{}; i < position - 1; i++) {
		Arrau1[i] = vectorOfData_[i];
	}
	Arrau1[position] = value;
	for (int i{ position + 1 }; i < size_; i++) {
		Arrau1[i] = vectorOfData_[i];
	}
	delete vectorOfData_;
	vectorOfData_ = Arrau1;
	size_++;
}

int Vector::size()
{
	return size_;
}

void Vector::clear()
{
	vectorOfData_ = new int[size_] {};

}