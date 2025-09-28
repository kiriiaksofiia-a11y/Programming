
#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    printf ("Введіть значення a:");
    scanf ("%f", &a);
    if (a>=-1&&a<=1) a=1;
    else a=0;
    printf ("f(a) = %.2f\n", a);

    return 0;
}