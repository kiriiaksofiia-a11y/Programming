#include <stdio.h>
#include <math.h>

int main()
{
    float x,y;
    printf ("Введіть значення x, y:");
    scanf ("%f%f", &x, &y);
    if ((x*x+y*y>=1)&&(x*x+y*y<=4))
    printf ("Точка належить площині");
    else printf ("Точка не належить площині");

    return 0;
}