#pragma once
class Vector {
public:
	Vector(int size);
	~Vector();
	void init();
	void sort();
	void min();
	void max();
	void size();
	void clear();
	void swap(int firstElement, int secondElement);
	void resize(int size);
	void front();
	void back();
	void printVector();
	void pushBack(int value);
	void append(int value, int position);
	
private:
	int* vectorOfData_;
	int size_{};
};

