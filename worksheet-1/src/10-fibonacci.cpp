#include <iostream>
#include <stdlib.h>

using namespace std;

void fibonacci(int a, int b, int d)
{
    if (d <= 0) return;
    
    int c = a + b;
    cout << c << "\t";

    fibonacci(b, c, d - 1);
}

int main()
{
    int a = 0;
    int b = 1;

    cout << a << "\t" << b << "\t";
    fibonacci(0, 1, 38);

    int x;
    cin>>x;

    return 0;
}