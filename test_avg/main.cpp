#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    const int SCORE_COUNT = 5;
    float avg = 0;

    cout << "Enter " << SCORE_COUNT << " test scores\n>> ";

    for (int i = 0; i < SCORE_COUNT; i++)
    {
        float input;
        cin >> input;
        avg += input;
    }
    
    avg /= SCORE_COUNT;
    cout << "Average score: " << setprecision(1) << fixed << avg << endl;
}

