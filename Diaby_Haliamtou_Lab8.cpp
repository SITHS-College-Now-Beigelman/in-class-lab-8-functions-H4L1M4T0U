// Halimatou Diaby
//Homework One Part One
//9/23/24

#include <iostream>
#include <cmath>
using namespace std;



using namespace std;
double square(double x); // Function declaration
double TheFourth(double x);

int main() {
    double number; 
    cout<< "Enter a Number Please!"<< endl;
    cin >> number;
    double result = square(number); // Function call
    double Result2 = TheFourth(number); //Function call to the fourth power

    cout << "The square of " << number << " is " << result << endl;
    return 0;
}

// Function definition
double square(double x) {
    return x * x;

double TheFourth(double x); {
    return x * x * x * x;
}
}
