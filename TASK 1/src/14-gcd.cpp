#include <iostream>
#include <stdlib.h>

using namespace std;

int gcd(int num1, int num2)
{
    return num1 == 0 ? num2 : gcd(num2 % num1, num1);
}

int main()
{
    int num1, num2;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"The GCD of given two numbers is: "<<gcd(num1, num2); 

    return 0;
}