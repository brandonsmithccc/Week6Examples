#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

const double PI = 3.1415;

//function prototypes

/**
 * A function that calculate the area of the square
 *
 * @param double - side length of the square
 *
 * @return double - area of the square
 */
double areaOfSquare(double sideLength);

/**
 * A function that calculates the perimeter of a rectangle
 *
 * @param length
 * @param width
 * @return
 */
double rectanglePerimeter(double length, double width);
double circleArea(double radius);

int main() {
    double sideLength = 6.5;
    cout << "A square with a side length of " << sideLength << " is " << areaOfSquare(sideLength) << endl;

    double radius = 3.0;
    cout << "The area of circle with radius " << radius << " is " << circleArea(radius) << endl;
}


double areaOfSquare(double sideLength){
    return sideLength * sideLength;
}


double rectanglePerimeter(double length, double width){
    return 2*(length + width);
}

double circleArea(double radius){
    return pow(radius,2) * PI;
}