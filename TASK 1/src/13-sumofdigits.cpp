#include <iostream>
#include <stdlib.h>

using namespace std;

int findSum(int num, int sum)
{
    if (num <= 0) return sum;
    return findSum(num / 10, sum + num % 10);
}

int main()
{
    int rec, num;
    int sum = 0;

    cout<<"Enter your number: ";
    cin>>num;

    cout<<"Type 1 if recursion else 0: ";
    cin>>rec;

    if (rec == 0)
    {
        while (num > 0)
        {
            sum += num % 10;
            num = num / 10;
        }
    }
    else if (rec == 1)
    {
        sum = findSum(num, 0);
    }
    else
        cout<<"Invalid value";

    cout<<"Sum is: "<<sum;

    return 0;
}