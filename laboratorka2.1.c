#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    printf ("Введіть числа: \n");
    scanf ("%f%f%f%f", &a,&b,&c,&d );
    if ((a<b)&&(b<c)&&(c<d)) {
    } else if ((a>b)&&(b>c)&&(c>d)) {
    a=fabs(a);
    b=fabs(b);
    c=fabs(c);
    d=fabs(d);
   } else {
    a*=10;
    b*=10;
    c*=10;
    d*=10; }
    printf ("Відповідь= %.2f, %.2f, %.2f, %.2f\n", a,b,c,d);
    return 0;
}