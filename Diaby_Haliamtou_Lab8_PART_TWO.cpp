// Halimatou Diaby
//LAB 8 Part TWO
//9/23/24




#include<iostream> 
using namespace std;

int doubleMultiply(int a, int b) {   //FUNCTION DEFINITION  --> Accepts 2 parameters
    int product;
    product=a*b* 2;   //multiply these 2 parameters together, then multiple that by 2
    return product; // This is what the function returns basically
}
int main() {

int num1, num2;
cout<<"Enter two integers: "; //Accepts user input (2 integers)
cin >> num1 >> num2; //(Stores it into num1 and num2 )
cout << "Twice the product of the numbers is: "<< doubleMultiply (num1, num2) << endl; //--> Num1 and Num 2 are basically the 2 parameters that doubleMultiply accepts.
    system("PAUSE");
return 0;
    }