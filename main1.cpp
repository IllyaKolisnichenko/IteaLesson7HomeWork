#include "Vector.h"

void testVector() {
    Vector vector{1};
    auto quantity = [&](int number) {
        for (int i = 0; i < number; i++) {
            vector.pushBack(rand() % 10);
        }
    };
    vector.printVector();
    vector.clear();
    std::cout << vector.size() << std::endl;
    vector.printVector();
    vector.sort();
    vector.swap(3, 1);
    vector.append(100, 5);
    std::cout << std::endl << std::endl << std::endl;
    quantity(5);
    std::cout << vector.size() << std::endl;
    vector.printVector();
    vector.sort();
    vector.resize(3);
    vector.printVector();
    std::cout << std::endl << std::endl << std::endl;
    quantity(8);
    vector.printVector();
    std::cout << vector.min() << std::endl;
    std::cout << vector.max() << std::endl;
    std::cout << vector.front() << std::endl;
    std::cout << vector.back() << std::endl;
}

int main() {
    testVector();
}