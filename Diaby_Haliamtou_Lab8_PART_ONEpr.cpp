//Halimatou Diaby
//LAB 8 Part One
// 9/23/24



#include <iostream>
#include <cmath>
using namespace std;




double SquareFunction(double x); // Function Declaration
double FourthPowerFunction(double y); // Function Declaration
double FloorNumFunction (double z); //Function Declaration



int main() {
    double TheNumber;
    cout << "Please enter a number " <<endl;
    cin >> TheNumber;
    double SquareTheNumber = SquareFunction(TheNumber);
    double TheNumberToTheFourth = FourthPowerFunction(TheNumber);
    double FloorOfTheNumber = FloorNumFunction(TheNumber);


    cout << TheNumber << "Squared is : "<< SquareTheNumber << endl;
    cout << TheNumber  << "To the fourth power is : " << TheNumberToTheFourth << endl;
    cout << TheNumber << "Floored is : " << FloorOfTheNumber << endl;

    







    return 0;
}



// Function Definitions 


double SquareFunction(double x){

    return x * x;
}


double FourthPowerFunction(double x){

    return x * x * x * x;
}

double FloorNumFunction(double x){

    return floor(x);
}