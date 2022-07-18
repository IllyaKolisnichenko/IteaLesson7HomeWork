#include "Vector.h"

void testVector() {
    Vector vector{0};

    vector.pushBack(5);
    vector.pushBack(3);
    vector.pushBack(6);
    vector.pushBack(2);
    vector.pushBack(1);
    vector.printVector();

    std::cout << "max is " << vector.max() << '\n';
    std::cout << "min is " << vector.min() << '\n';
    std::cout << "size is " << vector.size() << '\n';
    std::cout << "front " << vector.front() << '\n';
    std::cout << "back " << vector.back() << '\n';

    vector.resize(10);
    vector.printVector();

    vector.swap(2,3);
	std::cout << "swaped: " << '\n';
	vector.printVector();

    vector.append(25, 2);
    std::cout << "appended: " << '\n';
    vector.printVector();

    vector.clear();
    vector.printVector();
}

int main() {
    testVector();
}
