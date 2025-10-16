/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a, dob=1;
    int n;
    
    printf ("Введіть n: ");
    scanf ("%d", &n);
    
    printf ("Введіть a: ");
    scanf ("%f", &a);
    
    for (int i=0; i<=n; i++)
    dob*=(a + i - 1);
    
    printf ("dob=%.2f", dob);
        
    return 0;
}