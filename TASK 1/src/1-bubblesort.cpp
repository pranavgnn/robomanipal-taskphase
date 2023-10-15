#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

void bubblesort(string arr)
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

    for (i = 0; i < n; i++) {
        cout<<arr[i];
    }
}

int main()
{
    string word;

    cout<<"Enter the word in lowercase: ";
    cin>>word;

    bubblesort(word);
    
    return 0;
}
