#include <iostream>
#include <stdlib.h>

using namespace std;

string convert(int n, int base, string chars, string out)
{
    if (n == 0)
    {
        if (out.length() == 0)
            out.append("0");

        return out;
    }

    string digit(1, chars[n % base]);
    out.append(digit);

    return convert(n / base, base, chars, out);
}

int main()
{
    int dec, base, i;
    string out;

    cout<<"Enter your number in base 10 (decimal): ";
    cin>>dec;

    cout<<"Enter your base: ";
    cin>>base;
    
    if (base == 2)
        out = convert(dec, base, "01", "");
    else if (base == 8)
        out = convert(dec, base, "01234567", "");
    else if (base == 16)
        out = convert(dec, base, "0123456789ABCDEF", "");
    else
    {
        cout<<"Base out of choice. (2, 8, 16)";
        return 0;
    }

    cout<<"Converted: ";
    for (int i = out.length() - 1; i >= 0; i--)
        cout<<out[i];

    return 0;
}