// Application2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car c1;
    c1.setMaker("Hond");
    c1.setModel(2018);

    cout << "This Car made by " << c1.getMaker() << endl;
    cout << "This Car model is " << c1.getModel() << endl;
}
