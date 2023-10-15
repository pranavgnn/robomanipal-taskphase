#include <iostream>
#include <stdlib.h>

using namespace std;

void multiply(int m1[100][100], int m2[100][100], int prod[100][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            prod[i][j] = 0;

            for (int k = 0; k < m; k++)
                prod[i][j] += m1[i][k] * m2[k][j];
        }
}

void transpose(int mat[100][100], int res[100][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            res[j][i] = mat[i][j];
}

int main()
{
    int m1[100][100], m2[100][100], p1[100][100], t1[100][100], t2[100][100], t3[100][100], p2[100][100];
    int x1, y1, x2, y2, i, j;

    cout<<"Enter the order of the first matrix A: ";
    cin>>x1>>y1;

    cout<<"Enter the order of the second matrix B: ";
    cin>>x2>>y2;

    if (x1 != y2)
    {
        cout<<"The two matrices are incompatible for multiplication";
        return 0;
    }

    cout<<"Enter the elements of first matrix A: ";
    for (i = 0; i < x1; i++)
        for (int j = 0; j < y1; j++)
            cin>>m1[i][j];
        
    cout<<"Enter the elements of second matrix B: ";
    for (i = 0; i < x2; i++)
        for (int j = 0; j < y2; j++)
            cin>>m2[i][j];

    multiply(m1, m2, p1, x1, y2);

    cout<<"A.B = ";
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            cout<<p1[i][j]<<" ";
    cout<<"\n";

    transpose(p1, t1, x1, y2);

    cout<<"(A.B)' = ";
    for (i = 0; i < y2; i++)
        for (j = 0; j < x1; j++)
            cout<<t1[i][j]<<" ";
    cout<<"\n";

    transpose(m1, t2, x1, y1);

    cout<<"A' = ";
    for (i = 0; i < y1; i++)
        for (j = 0; j < x1; j++)
            cout<<t2[i][j]<<" ";
    cout<<"\n";

    transpose(m2, t3, x2, y2);

    cout<<"B' = ";
    for (i = 0; i < y2; i++)
        for (j = 0; j < x2; j++)
            cout<<t3[i][j]<<" ";
    cout<<"\n";

    multiply(t3, t2, p2, x1, y2);

    cout<<"B'.A' = ";
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            cout<<p2[i][j]<<" ";
    cout<<"\n";

    cout<<"Hence, (A.B)' = B'.A'";

    return 0;
}