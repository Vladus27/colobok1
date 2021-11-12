#include <stdio.h>

int main(void)
{
    int n;
    printf("N:");
    scanf ("%i",&n);
    int a=0, b=0;

    while(b<n)
    {
        ++a;
        b+=3;
    }
    printf("K: %i\nСума:%i\n",a, b);
    return 0;
}
