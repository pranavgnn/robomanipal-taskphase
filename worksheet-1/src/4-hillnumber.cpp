#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int num;
    string str = to_string(num);
    int len = str.length();

    cout<<"Enter your number: ";
    cin>>num;

    if (str[0] > str[1]) {
        cout << "Number is not a hill number";
        return 0;
    }

    

    return 0;
}