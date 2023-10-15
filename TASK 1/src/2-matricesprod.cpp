#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int m1, n1, m2, n2, i, j, k;
    int mat1[100][100], mat2[100][100], prod[100][100];

    cout<<"Enter the order of first matrix (m n): ";
    cin>>m1>>n1;

    cout<<"Enter the order of second matrix (m n): ";
    cin>>m2>>n2;

    if (m1 != n2)
    {
        cout<<"The matrices are incompatible for multiplication as m1 != n2";
        return 0;
    }

    cout<<"Enter the matrix 1 elements: ";
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++) 
            cin >> mat1[i][j];

    cout<<"Enter the matrix 2 elements: ";
    for (i = 0; i < m2; i++)
        for (j = 0; j < n2; j++) 
            cin >> mat2[i][j];

    for (i = 0; i < m1; i++)
        for (j = 0; j < n2; j++) {
            prod[i][j] = 0;
            
            for (k = 0; k < m1; k++)
                prod[i][j] += mat1[i][k] * mat2[k][j];
        }    

    cout<<"The product matrix is: ";
    for (i = 0; i < m1; i++)
        for (j = 0; j < n2; j++)
            cout<<prod[i][j]<<" ";

    return 0;
}