#include <stdio.h>

int main()
{
    int a =10,b=25;
    a = b++ + a++; //a = 35 b = 26
    b = ++b + ++a; //a = 36 b = 63

    printf("%d\n%d\n",a,b);
}
