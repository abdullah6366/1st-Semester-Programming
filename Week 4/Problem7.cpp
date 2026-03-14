#include <iostream>
using namespace std;
int main()
{
    string shape;
    cout << "Enter the name of the shape ( circle, square, rectangle, triangle): ";
    cin >> shape;
    if (shape == "square")
    {
        float side, area;
        cout << "Enter the length of the side : ";
        cin >> side;
        area = side * side;
        cout << "The area of square : " << area << endl;
    }
    if (shape == "rectangle")
    {
        float length, width, area;
        cout << "Enter the length of the rectangle : ";
        cin >> length;
        cout << "Enter the width of the rectangle : ";
        cin >> width;
        area = length * width;
        cout << "The area of rectangle : " << area << endl;
    }
    if (shape == "circle")
    {
        float radius, pi = 3.14, area;
        cout << "Enter the radius of circle : ";
        cin >> radius;
        area = pi * radius * radius;
        cout << "The area of circle : " << area << endl;
    }
    if (shape == "triangle")
    {
        float base, height, area;
        cout << "Enter the length of the base : ";
        cin >> base;
        cout << "Enter the length of the height : ";
        cin >> height;
        area = 1 / 2 * (height * base);
        cout << "The area of triangle : " << area << endl;
    }
}