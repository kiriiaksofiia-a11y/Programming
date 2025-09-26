#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    printf ("Введіть змінні: ");
    scanf ("%d%d%d", &x,&y,&z);
    if ((x+y>z)&&(x+z>y)&&(z+y>x)) printf("Можна утворити трикутник"); 
    else printf ("Трикутник утворити не можна");
    
    return 0;
}