#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i,j,m;
    i = ++a[1]; //i = 2
    j = a[1]++; // j = 2
    m = a[i++];	// i = 3 m =15
    printf("%d, %d, %d", i, j, m);
    return(0);
}
