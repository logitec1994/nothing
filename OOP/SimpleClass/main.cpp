#include <iostream>

class Area
{
public:
    int base;
    int breadth;
    int height;
    int length;
    int side;

};

int main()
{
    Area A1, A2, A3;

    float area;
    std::cout << "Area of Rectangle.\n";
    std::cout << "\nEnter the length of rectangle: ";
    std::cin >> A1.length;

    std::cout << "\nEnter the breadth of rectangle: ";
    std::cin >> A1.breadth;

    std::cout << "\n\nArea of Square.\n";
    std::cout << "\nEnter the sides of Square: ";
    std::cin >> A2.side;
    std::cout << "\n\nArea of triangle.\n";
    std::cout << "\nEnter the base of triangle: ";
    std::cin >> A3.base;
    std::cout << "\nEnter the height of triangle: ";
    std::cin >> A3.height;

    area = A1.length * A1.breadth;
    std::cout << "\n\nArea of rectangle is: " << area << " units";
    area = A2.side * A2.side;
    std::cout << "\n\nArea of square is: " << area << " units";
    area = 0.5 * A3.base * A3.height;
    std::cout << "\n\nArea of triangle is: " << area << " units\n";

    return 0;
}