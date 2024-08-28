// lab201.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
using namespace std;
int main() {
    //set up variables used
    string in1, in2, in3, in4;
    int x1, y1, x2, y2;
    float dist1, dist2;
    char choice;
    //get choice from user ‘e’ to enter values or
    //’g’ to generate values using random values
    cout << "How would you like to get the 4 values: ";
    cin >> choice;
    //get input if choice is ‘e’
    cout << "Please enter 4 values: ";
    cin >> in1 >> in2 >> in3 >> in4;
    //here we will verify input to make sure it is numeric
    //if so, make sure it between -10 and 10 inclusive
    //if not, send error message to the screen &
    //end program
    //else if choice is ‘g’
    srand(time(0));
    //generate 4 random numbers between -10 & 10
    //endIf
    //print both points
    //calculate dist1 & dist2
    //determine which is closer and print
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
