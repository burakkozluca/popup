#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *vp;
    char ch = 74;
    char *cp = "JACK";
    int j = 65;
    vp = &ch;
    printf("%c", *(char*)vp); //J
    vp=&j;
    printf("%c", *(int*)vp); //A
    vp=cp;
    printf("%s", (char*)vp+2); //CK
    return(0);
}
