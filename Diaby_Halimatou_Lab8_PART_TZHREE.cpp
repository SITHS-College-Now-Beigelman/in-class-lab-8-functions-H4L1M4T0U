// Halimatou Diaby
//LAB 8 Part One
//9/23/24

#include <iostream>
#include <cmath>
using namespace std;



double GetSum(double a, double b, double c) {   //FUNCTION DEFINITION  --> Accepts 2 parameters
    double result;
    result = a+b+c;   
    return result; // This is what the function returns basically
}
int main() {

double num1, num2, num3;
cout<<"Enter three Numbers (you can also put decimals!): "; //Accepts user input (3 numbers)
cin >> num1 >> num2 >>num3; //(Stores it into num1, num2, and num3 )
cout << "The sum of all 3 : "<< GetSum(num1, num2, num3) << endl; 
    system("PAUSE");
return 0;
    }


/* OUTPUTT

Enter three Numbers (you can also put decimals!): 12.34
12.89780
10.99
The sum of all 3 : 36.2278
Press any key to continue . . . 
PS C:\Users\halim\OneDrive\Documents\GitHub\in-class-lab-8-functions-H4L1M4T0U> 
*/