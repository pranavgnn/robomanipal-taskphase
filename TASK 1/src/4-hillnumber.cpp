#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int num;
    string str = to_string(num);
    int len = str.length();
    int ascending = 1;

    cout<<"Enter your number: ";
    cin>>num;

    if (str[0] > str[1]) {
        cout << "Number is not a hill number";
        return 0;
    }

    for (int i = 1; i < len - 1; i++)
    {
        if (str[i] > str[i + 1])
        {
            if (ascending < 0)
            {
                cout << "Number is not a hill number";
                return 0;
            }
            else if (ascending == 1)
                ascending = 0;
            else
                ascending = -1;
        }
    }

    if (ascending < 0)
        cout << "Number is a hill number";
    else
        cout << "Number is not a hill number";

    return 0;
}