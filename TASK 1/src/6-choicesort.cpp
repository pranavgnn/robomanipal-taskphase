#include <iostream>
#include <stdlib.h>

using namespace std;

void selectionSort(int arr[], int i, int n)
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
        selectionSort(arr, i + 1, n);
}

void bubbleSort(int arr[], int n)
{
    int i, j, t, swapped;

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
    char choice;
    int arr[100], n, i;

    cout << "Enter the algorithm you want to choose: (b) - Bubble Sort; (s) - Selection Sort: ";
    cin >> choice;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    cout<<"Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin>>arr[i];

    if (choice == 'b')
        bubbleSort(arr, n);
    else if (choice == 's')
        selectionSort(arr, 0, n);
    else
    {
        cout<<"Invalid choice!";
        return 0;
    }

    cout<<"The sorted array elements are: ";
    for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    return 0;
}