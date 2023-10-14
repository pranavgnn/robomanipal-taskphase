#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char collection[100];
    int n, i;

    cout<<"Enter the number of strings you want to enter: ";
    cin>>n;

    for (i = 0; i < n; i++)
        collection = getline();

    return 0;
}