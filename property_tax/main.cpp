#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float actual_val, assessment_val, tax;

    cout << "Enter the actual value of the property.\n>> ";

    cin >> actual_val;

    assessment_val = actual_val * 0.6;
    
    tax = assessment_val * 0.0075;

    cout << "The property tax is $" << setprecision(2) << fixed << tax << endl;
}

