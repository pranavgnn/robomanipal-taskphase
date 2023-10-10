#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int factorSum(int num)
{
    int sum = 1;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
        { 
            if (i == (num / i))
                sum += i;
            else
                sum += i + num / i;
        }
    }

    return sum;
}

int main()
{
    int num1, num2;

    cout<<"Enter your two numbers: ";
    cin>>num1>>num2;

    if (factorSum(num1) == num2 and factorSum(num2) == num1)
        cout<<"Numbers are amicable";
    else
        cout<<"Numbers are not amicable";

    return 0;
}