#include "Vector.h"

Vector::Vector(int size) {
    size_ = size;
    vectorOfData_ = new int [size_] {};
}

Vector::~Vector() {
    delete[] vectorOfData_;
}

int Vector::max() {
    int max = *vectorOfData_;

    for (int i = 0; i < size_; i++) {
        if (vectorOfData_[i] > max) {
            max = vectorOfData_[i];
        }
    }
    return max;
}

int Vector::min() {
    int min = *vectorOfData_;

    for (int i = 0; i < size_; i++) {
        if (vectorOfData_[i] < min) {
            min = vectorOfData_[i];
        }
    }
    return min;
}

void Vector::sort() {
    if (size_ == 0) {
        std::cout << "Can not be sorted due to size of vector equals 0. " << std::endl;
        return;
    }

    std::sort(vectorOfData_, vectorOfData_ + size_);
}

void Vector::swap(int firstElement, int secondElement) {
    if (size_ == 0) {
        std::cout << "Can not be swapped due to size of vector equals 0." << std::endl;
        return;
    }
}

void Vector::resize(int size) {
    int* temp = vectorOfData_;

    int newsize= size;
    size_ = size;

    vectorOfData_ = new int[size_] {};

    for (int i = 0; i < newsize; i++) {
        vectorOfData_[i] = temp[i];
    }
}

int Vector::front() {
    return *vectorOfData_;
}

int Vector::back() {
    return vectorOfData_[size_ - 1];
}

void Vector::printVector() {
    if (size_ == 0) {
        std::cout << "Can not be printed *(the size of vector = 0)" << std::endl;
        return;
    }

    for (int i{}; i < size_; i++) {
        std::cout << vectorOfData_[i] << " ";
    }
    std::cout << std::endl;
}


void Vector::pushBack(int value) {
    resize(size_ += 1);
    vectorOfData_[size_ - 1] = value;
}

void Vector::append(int value, int position) {
    if (position >= size_) {
        std::cout << "It's off the map position. " << std::endl;
        return;
    }

    int* temp = vectorOfData_;
    vectorOfData_ = new int[size_ += 1]{};

    for (int i{}; i < position; i++) {
        vectorOfData_[i] = temp[i];
    }

    vectorOfData_[position] = value;

    for (int i{ position + 1 }; i < size_; i++) {
        vectorOfData_[i] = temp[i - 1];
    }
}

int Vector::size() {
    return size_;
}

void Vector::clear() {
    size_ = 0;
    delete[] vectorOfData_;
}
