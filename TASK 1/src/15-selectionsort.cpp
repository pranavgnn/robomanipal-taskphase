#include <iostream>
#include <stdlib.h>

using namespace std;

void sort(int arr[], int i, int n)
{
    int highestPos = i;
    int highestNum = -1;

    for (int j = i; j < n; j++)
        if (highestNum < 0 || arr[j] < highestNum)
        {
            highestPos = j;
            highestNum = arr[j];
        }

    if (highestPos > i)
    {
        int t;
        t = arr[i];
        arr[i] = arr[highestPos];
        arr[highestPos] = t;
    }

    if (i >= n) return;
    else
        sort(arr, i + 1, n);
}

int main()
{
    int a[100], n, i;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    cout<<"Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin>>a[i];

    sort(a, 0, n);

    cout<<"The sorted array is: ";
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";

    return 0;
}