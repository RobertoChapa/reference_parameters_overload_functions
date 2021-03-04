#include <iostream>

double calculate(double r); // circle
void calculate(int x, int& area, int& parimeter); // square

using namespace std;

int main()
{
    int a; // used by the reference parameter
    int p; // used by the reference parameter
    int x = 5; // one side of a square

    calculate(x, a, p); // call square function 

    cout << "Square area: " << a << ", parimeter: " << p << endl;

    // circle
    double r = 5.5;
    double area_circle;

    area_circle = calculate(r);

    cout << "Area of circle: " << area_circle << endl;

    return 0;
}

double calculate(double r)
{
    double area_circle = 3.14 * pow(r, 2);

    return area_circle;
}

// square
void calculate(int x, int& area, int& parimeter) // area and parimeter calculation
{
    area = pow(x, 2); // area of a  square

    parimeter = x * 4; // parimeter of a square

    return;
}
