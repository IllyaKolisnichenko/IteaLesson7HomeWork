#include "Vector.h"
#include<iostream>
#include <ctime>

Vector::Vector(int size)
{
	size_ = size;
	vectorOfData_ = new int[size];
    for (int i{}; i < size_; i++)
        *(vectorOfData_+i) = 0;
}

void Vector::init(int valFrom, int valTo)
{
	std::srand(time(nullptr));
	for (int i{}; i < size_; i++)
		vectorOfData_[i] = valFrom + rand() % valTo;

}

Vector::~Vector()
{
	delete[] vectorOfData_;
}

int Vector::max()
{
	int max=vectorOfData_[1];
	for (int i{}; i < size_; i++)
	{
		if (vectorOfData_[i] > max) max=vectorOfData_[i];
	
	}

	return max;
}

int Vector::min()
{
	int min = vectorOfData_[1];
	for (int i{}; i < size_; i++)
	{
		if (vectorOfData_[i] < min) min = vectorOfData_[i];

	}

	return min;
}

void Vector::sort(int first, int last)
{
    if (first < last) {
        int i = first;
        int j = last;
        int mid = vectorOfData_[(first + last) / 2];
        do {
            while (vectorOfData_[i] < mid) {
                i++;
            }
            while (vectorOfData_[j] > mid) {
                j--;
            }
            if (i <= j) {
                int tmp = vectorOfData_[i];
                vectorOfData_[i] = vectorOfData_[j];
                vectorOfData_[j] = tmp;

                i++;
                j--;
            }
        } while (i <= j);

        if (j > 0) {
            //"left"
            sort(first, j);
        }
        if (i < size_) {
            //"right"
            sort(i, last);
        }
    }
}


void Vector::swap(int firstElement, int secondElement)
{

}

void Vector::resize(int size)
{ 
    if (size >= size_) {
       
        int* tempArr = new int[size] {};
        for (int i{}; i < size-(size-size_); i++) {
            tempArr[i] = vectorOfData_[i];
        }
        delete vectorOfData_;
        vectorOfData_ = tempArr;
        size_ += (size - size_);
         
       
    }
    if (size<size_){
        size_ -= (size_ - size);
        int* tempArr = new int[size_] {};
        for (int i{}; i < size_; i++) {
            tempArr[i] = vectorOfData_[i];
        }
        delete vectorOfData_;
        vectorOfData_ = tempArr;
        
        
        
    }
}

int Vector::front()
{
	return{};
}

int Vector::back()
{
	return{};
}

void Vector::printVector()
{
  
    for (int i{}; i < size_; i++) {
        std::cout << vectorOfData_[i] << " ";
    }
    std::cout << "\n";
}

void Vector::pushBack(int value)
{
    size_++;
    Vector::resize(size_);
    vectorOfData_[size_ - 1] = value;
    /*int* tempArr = new int[size_ + 1];
    for (int i{}; i < size_; i++) {
        tempArr[i] = vectorOfData_[i];
    }
    tempArr[size_] = value;
    delete vectorOfData_;
    vectorOfData_ = tempArr;*/

}
void Vector::append(int value, int position)
{
    if (position > size_) {
        std::cout << "can not to appand. Position > size of array";
    }

    int* tempArr = new int[size_ + 1]{};
    for (int i{}; i < position -1; i++) {
        tempArr[i] = vectorOfData_[i];
    }
    tempArr[position] = value;
    for (int i{ position + 1 }; i < size_; i++) {
        tempArr[i] = vectorOfData_[i];
    }
    delete vectorOfData_;
    vectorOfData_ = tempArr;
    size_++;
}

int Vector::size()
{
    return size_;
}

void Vector::clear()
{
    delete vectorOfData_;
    vectorOfData_ = new int[size_]{};
}
