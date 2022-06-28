#include <iostream>

class rectangle
{
    public:
        double length;
        double breadth;
        double area;

        // Member functions declaration
        void calculate_area(void);
        void get_dimensions();
        void display();
};

// Member functions definitions
void rectangle::calculate_area()
{
    area = length * breadth;
}

void rectangle::get_dimensions()
{
    std::cout << "\nEnter the length: ";
    std::cin >> length;
    
    std::cout << "\nEnter the breadth: ";
    std::cin >> breadth;
}

void rectangle::display()
{
    std::cout << "\nLength of rectangle: " << length << ", Breadth of rectangle: " << breadth;

    calculate_area();
    std::cout << "\nArea of rectangle: " << area << " units\n";

}

int main(int argc, char const *argv[])
{
    rectangle r;

    r.get_dimensions();
    r.display();

    return 0;
}