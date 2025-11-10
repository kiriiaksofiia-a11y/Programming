/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float x, a=1, eps;
       printf ("vvedit x, a, eps: \n");
       scanf("%f%f%f", &x,&a,&eps); 
       if ((x==0) || (a==0) || (eps<0)) { printf ("Помилка");
       return 0; }
    
    float ch, zn, sum=0, fact=1;
    int k=1;
  
    while (1) 
    {
        ch= pow(-1,k)* pow(x,-k) ; 
        fact=fact*2*k; 
        zn= pow(a,k)* fact;
        sum= ch/zn+ sum;  
        k++;
    if (sum<eps)   printf ("Занадто мала сума\n"); 
    break; }
    
     printf ("suma=%.4f\n", sum);
     printf ("Кількість доданків=%d\n", k);
    
    return 0;
}