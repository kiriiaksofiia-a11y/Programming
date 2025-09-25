#include <stdio.h>
#include <math.h>

int main()
{
    printf ("Обчислення гіпотенузи та площі\n");
    float katet1, katet2, hipotinuza, ploshcha;
    printf ("Довжина катета 1: ");
    scanf ("%f", &katet1);
    printf ("Довжина катета 2: ");
    scanf ("%f", &katet2);
    hipotinuza=sqrt((katet1*katet1)+(katet2*katet2));
    printf ("Довжина гіпотенузи=%.2f\n", hipotinuza);
    ploshcha=(katet1*katet2)/2;
    printf ("Площа=%.2f", ploshcha);
 return 0;
}