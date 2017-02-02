#include <iostream>
using namespace std;

int main()
{
    const double WIDGET_WEIGHT = 12.5;

    double pallet_weight, stacked_weight;
    int number_of_widgets;

    cout << "How much does the pallet weigh by itself?\n>> ";

    cin >> pallet_weight;

    cout << "How much does the pallet weigh with the widgets?\n>> ";

    cin >> stacked_weight;

    stacked_weight -= pallet_weight;

    number_of_widgets = stacked_weight / WIDGET_WEIGHT;

    if (number_of_widgets < 0)
    {
        cout << "Wow, either Newton was wrong about gravity, "
             << "or you put the numbers in backwards." << endl;
    }
    else
    {
        cout << endl
             << "The pallet has " << number_of_widgets << " widgets stacked on it."
             << endl;
    }
}

