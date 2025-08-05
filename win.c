#include <stdio.h>

int main()
{
    float a=0,b=2,sum=0;
    ++a;
    b++;
    sum=5+5*2/3+a-b;
    printf("Sum of a and b is: %.2f\n", sum);
    return 0;
}