#include <iostream>
#include <stdlib.h>

using namespace std;

int factorial(int number)
{
    return number >= 1 ? number * factorial(number - 1) : 1;
}

int main()
{
    int num;

    cout<<"Enter your number: ";
    cin>>num;

    cout<<factorial(num);

    return 0;
}