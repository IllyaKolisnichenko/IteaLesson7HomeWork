#include "Vector.h"

Vector::Vector(int size)
    :size_{size} {
    vectorOfData_ = new int[size]{};
}

Vector::~Vector() {
    delete[] vectorOfData_;
}

int Vector::max() {
	int max = vectorOfData_[0];
    for(int i = 0; i < size_; i++) {
        if(max < vectorOfData_[i]) {
            max = vectorOfData_[i];
        } 
    }
    return max;
}

int Vector::min() {
	int min = vectorOfData_[0];
    for(int i = 0; i < size_; i++) {
        if(min > vectorOfData_[i]) {
            min = vectorOfData_[i];
        }
    }
    return min;
}

void Vector::sort() {
	for(int i = 0; i < size_; i++) {
        for(int j = i + 1; j < size_; j++) {
            if(*(vectorOfData_ + j) < *(vectorOfData_ + i)) {
                swap(*(vectorOfData_ + i), *(vectorOfData_ + j));
            }
        }
    }
}

void Vector::swap(int firstElement, int secondElement) {
	int *temp;
    temp = &secondElement;
    secondElement = firstElement;
    firstElement = *temp;
}

void Vector::resize(int size) {
	if(size < (size_ * 2)) {
        size_ = size;
    } else {
        int *temp = new int[size * 2]{};
        for(int i = 0; i < size_; i++) {
            temp[i] = vectorOfData_[i];
        }
        delete[] vectorOfData_;
        size_ = size;
        vectorOfData_ = new int[size_ * 2];
        for(int i = 0; i < size_; i++) {
            vectorOfData_[i] = temp[i];
        }
        delete[] temp;
    }
}

int Vector::front() {
	return vectorOfData_[0];
}

int Vector::back() {
    return vectorOfData_[size_ - 1];
}

void Vector::printVector() {
	for(int i = 0; i < size_; i++) {
        std::cout << vectorOfData_[i] << '\n';
    }
}

void Vector::pushBack(int value) {
    size_++;
    resize(size_);
    vectorOfData_[size_ - 1] = value;
}

void Vector::append(int value, int position) {
	if(position > size_ + 1) {
        return;
    }
    int *temp = new int[size_ + 1]{};
    for(int i = 0; i < (position - 1); i++) {
       temp[i] = vectorOfData_[i]; 
    }
    temp[position - 1] = value;
    for(int i = 0; i < size_; i++) {
        temp[i + 1] = vectorOfData_[i];
    }
}

int Vector::size() {
    return size_;
}

void Vector::clear() {
    size_ = 0;
    delete[] vectorOfData_;
}
