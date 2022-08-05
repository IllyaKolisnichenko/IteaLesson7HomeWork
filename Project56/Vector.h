

#pragma once

class Vector {
public:
    Vector( int size);
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
    void printVector1();
    void printVector();
    void pushBack(int value);
    void append(int value, int position);

private:
    int size_{};
    int* vectorOfData_;
   int position1;
};
