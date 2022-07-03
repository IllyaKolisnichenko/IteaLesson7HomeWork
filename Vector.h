#pragma once
#include <iostream>
#include <cstdlib>

class Vector {
public:
	Vector(int size);
	~Vector();
	int max();
	int min();
    void sort();
	int size();
	void clear();
	void swap(int firstElement, int secondElement);
	void resize(int size);
	int front();
	int back();
	void printVector();
	void pushBack(int value);
	void append(int value, int position);
    int* vectorOfData_;

private:
	int size_{};
};
