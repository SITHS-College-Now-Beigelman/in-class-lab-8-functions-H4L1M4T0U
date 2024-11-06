// Halimatou Diaby
//LAB 8 Part One
//9/23/24

#include <iostream>
#include <cmath>
using namespace std;



double square(double x); // Function declaration
double TheFourth(double x); // Function declaration
double Flooring (double x); //FUNCTION DECLARAATIONNN

int main() {
    double number; 
    cout << "Enter a Number Please!" << endl;
    cin >> number;
    double SquareOfNum = square(number); // Function call
    double FourthOfNum = TheFourth(number); // Function call to the fourth power
    double FloorOfNum = Flooring(number);

    cout << "The square of " << number << " is " << SquareOfNum << endl;
    cout << "The fourth power of " << number << " is " << FourthOfNum << endl; // Added line to print the fourth power
    cout << "The floor of " << number << "is " << FloorOfNum << endl;
    return 0;
}

// Function definitions
double square(double x) {
    return x * x;
}

double TheFourth(double x) {
    return x * x * x * x;
}

double Flooring(double x) {
    return floor(x);
}


/*OUTPUT

Enter a Number Please!
12.34
The square of 12.34 is 152.276
The fourth power of 12.34 is 23187.9
The floor of 12.34is 12
PS C:\Users\halim\OneDrive\Documents\GitHub\in-class-lab-8-functions-H4L1M4T0U> 


*/