/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    printf ("Кількість студентів: ");
    scanf ("%d", &N);
    float distance, speed, timee;
    for (int i=0; i<N; i++ ) {
    printf ("distance =");
    scanf ("%f",&distance);
    printf ("speed= ");
    scanf ("%f", &speed);
    timee=(distance/speed);
    speed=speed+timee; }
    printf ("Загальний час бігу команди: %f", timee);
    
    return 0;
}