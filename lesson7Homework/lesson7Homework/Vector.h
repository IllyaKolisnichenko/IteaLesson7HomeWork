#pragma once

class Vector {
public:
    Vector(int size);
    void init(int valFrom, int valTo);
    ~Vector();
    int max();
    int min();
    void sort(int first, int last);
    int size();
    void clear();
    void swap(int firstElement, int secondElement);
    void resize(int size);
    int front();
    int back();
    void printVector();
    void pushBack(int value);
    void append(int value, int position);

private:
    int* vectorOfData_;
    int size_{};
};
