#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    int *ptr = (int *)malloc(5 * sizeof(int));

    while (i <= 5)
    {
        i++;
		printf("%d ",i);
        *(ptr + i) = i;

    }
	printf("\n%d\n", *(ptr + 2));
	printf("%d\n", *(ptr + 3));
	printf("%d\n", *(ptr + 4));


    printf("\n%d\n", *ptr++);
    printf("%d\n", (*ptr)++);
    printf("%d\n", *ptr);
    printf("%d\n", *++ptr);
    printf("%d\n", ++*ptr);
}
