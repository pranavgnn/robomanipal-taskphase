#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int mat[100][100], res[100][100], m, n, i, j, l;

    cout<<"Enter the order of the matrix: ";
    cin>>m>>n;

    cout<<"Enter the matrix elements: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin>>mat[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            res[i][j] = 1;

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            if (res[i][j] == 0) continue;

            if (mat[i][j] == 0)
            {
                for (l = 0; l <= n; l++)
                    res[i][l] = 0;

                for (l = 0; l <= m; l++)
                    res[l][j] = 0;
            }   
            else
                res[i][j] = mat[i][j];
        }
    
    cout<<"The array after required manipulation is: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cout<<res[i][j]<<" ";

    return 0;
}