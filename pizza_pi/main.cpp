#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double SLICE_AREA = 14.125;
    
    double diameter, radius, area;
    int slices;

    cout << "What is the diameter of the pizza in inches?\n>> ";

    cin >> diameter;

    radius = diameter / 2;

    area = M_PI * radius * radius;

    slices = (int) area / SLICE_AREA;
    
    cout << "The pizza can be cut into " << slices;

    if (slices != 1)
    {
        cout << " slices" << endl;
    }
    else
    {
        cout << " slice" << endl;
    }
}

