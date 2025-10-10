#include <stdio.h>
#include <math.h>

int main() {

int n;
float x;

printf ("Введіть n, х: ");
scanf ("%d", &n);
scanf ("%f", &x);

switch (n)
{ case 1:
x=sin(x);
printf ("sinx = %.7f\n", x); break;

case 2:
x=cos(x);
printf ("cosx = %.7f\n", x); break;

case 3:
x=tan(x);
printf ("tanx = %.7f\n", x); break;

default: printf ("Помилка");
}
return 0;
}