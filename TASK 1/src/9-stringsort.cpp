#include <iostream>
#include <stdlib.h>

using namespace std;

void sort(string arr[], int n)
{
    int i, j, swapped;
    string t;

    for (i = 0; i < n; i++)
    {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].length() > arr[j + 1].length())
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                
                swapped = 1;
            }
        }

        if (swapped == 0) break;
    }
}

string sort(string arr)
{
    int i, j, t, swapped;
    int n = arr.length();

    for (i = 0; i < n; i++)
    {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                
                swapped = 1;
            }
        }

        if (swapped == 0) break;
    }

    return arr;
}

int main()
{
    string strings[100];
    int n, i;

    cout<<"Enter the number of strings you want to enter: ";
    cin>>n;

    cout<<"Enter the strings: ";
    for (i = 0; i < n; i++)
        cin>>strings[i];

    sort(strings, n);

    cout<<"\nSorted array of strings:\n";
    for (i = 0; i < n; i++)
    {
        cout<<strings[i]<<"\n";
        strings[i] = sort(strings[i]);
    }

    cout<<"\nArray of sorted strings:\n";
    for (i = 0; i < n; i++)
        cout<<strings[i]<<"\n";
}