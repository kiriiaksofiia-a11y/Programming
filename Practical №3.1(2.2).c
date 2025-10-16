/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, suma=0;
    printf ("Введіть n: ");
    scanf ("%d", &n);
    for (int i=0; i<=n; i++) 
        suma=suma+i*2;
        printf ("%d", suma);
        
    return 0;
}