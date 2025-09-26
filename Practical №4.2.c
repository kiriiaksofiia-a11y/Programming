#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf ("Введіть координати: ");
    scanf ("%f%f", &x, &y);
    if ((x==0) || (y==0)) printf ("Помилка ");

    if ((x>0)&&(y>0)) printf ("Перша чверть");
    if ((x<0)&&(y>0)) printf ("Друга чверть");
    if ((x<0)&&(y<0)) printf ("Третя чверть");
    if ((x>0)&&(y<0)) printf ("Четверта чверть");
    
    return 0;
}