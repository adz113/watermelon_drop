// watermelon drop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    double height = 0;
    cout << "Please input the time of the fall in seconds: ";
    cin >> t;
    cout << "Please input the height of the bridge in meters: ";
    cin >> height;
    cout << "\n Time falling(seconds)        Distance fallen (metrs)" << endl;
    cout << " ****************************************************" << endl;


    for (int i = 0; i <= t; i++) {
        double d = 0.5 * 9.8 * (i * i);
        cout << "   " << i << "                                " << d << endl;
        if (d > height) {
            cout << "Warning-Bad data: The distance fallen exceeds the height of the bridge!" << endl;
        }
    }
}

