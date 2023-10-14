#include <iostream>
#include <stdlib.h>

using namespace std;

char* copyString(char s[])
{
    char *s2, *p1, *p2;
 
    s2 = (char*)malloc(20);
    p1 = s;
    p2 = s2;

    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
 
    return s2;
}

int main()
{
    char str[100];

    cout<<"Enter your string: ";
    cin>>str;

    char* cpy = copyString(str);

    cout<<"Copied string: "<<cpy;
    
    return 0;
}