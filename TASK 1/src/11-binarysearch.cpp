#include <iostream>
#include <stdlib.h>

using namespace std;

int binarySearch(int *arr, int e, int f, int l, int n)
{
    if (l == f || l >= n)
        return -1;

    int m = (l - f) / 2;

    if (arr[m] == e)
        return m;
    else if (m > e)
        return binarySearch(arr, e, f, m - 1, n);
    else
        return binarySearch(arr, e, m + 1, l, n);
}

int main()
{
    int a[100], n, i, e;

    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter the array elements in ascending order: ";
    for (i = 0; i < n; i++)
        cin>>a[i];

    cout<<"Enter the element to be searched for: ";
    cin>>e;

    int pos = binarySearch(a, e, 0, n - 1, n);

    if (pos > 0)
        cout<<"Element found in position: "<<pos;
    else
        cout<<"Element not found in array";

    return 0;
}