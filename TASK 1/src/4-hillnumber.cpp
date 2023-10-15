#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num, ascending = 1;

    cout<<"Enter your number: ";
    cin>>num;

    string str = to_string(num);
    int n = str.length() - 1;

    if (n <= 1 || str[0] > str[1]) {
        cout << "Number is not a hill number";
        return 0;
    }

    for (int i = 1; i < n; i++)
        if (str[i] > str[i + 1])
            ascending = -1;

    if (ascending < 0)
        cout << "Number is a hill number";
    else
        cout << "Number is not a hill number";

    return 0;
}