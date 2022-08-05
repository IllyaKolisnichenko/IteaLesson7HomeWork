

#include "Vector.h"
#include<iostream>

void testVector()
{
   const int sizeArr{ 3 };
    Vector oksize(sizeArr);
    oksize.sort();
    oksize.printVector1();
    oksize.front();
    oksize.printVector1();
    oksize.back();
    oksize.printVector1();
    oksize.append(1, 2);
    oksize.printVector1();
    oksize.size();
    oksize.printVector1();
    oksize.max();
    oksize.printVector1();
    oksize.min();
    oksize.printVector1();
    oksize.resize(2);
    oksize.printVector1();
    oksize.append(3, 2);
    oksize.pushBack(1);
    oksize.pushBack(3);
    oksize.pushBack(5);
    oksize.pushBack(5);
    oksize.printVector();
                                    //  std::cout << "fvhjegfijv" << oksize.front();
   
}


int main()
{
   
    testVector();

 
    return 0;
}
