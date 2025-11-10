/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
int n, m, i, k;
    
do {
    printf ("Введіть n i m: ");
    scanf ("%d%d", &n, &m);
    }  while ((n>=100) && (m>10));

    srand (time (NULL)); 
    int  A[1000];  

    printf ("Введіть елементи A[%d, %d]", n, m);
    
    for (i=0; i<n*m; i++) {

      A[i]= (rand () % 100);
      printf ("%d\n", A[i]); 

    }
    
  float min2, min1,min, max;
  
 min = A[0]; 
    for (i=0; i<m; i++ )
    if (A[i]<min) min=A[i]; 
 min1= A[m+1];
     for (i=m+1; i<2*m; i++ )
    if (A[i]<min1) min1=A[i]; 
 min2= A[m+n-1+1];
       for (i=m*(n-1)+1; i<n+m; i++ )
    if (A[i]<min2) min2=A[i]; 
    
    if (min>min1) max=min;
    if (min2>max) max= min2;
    printf ("res=%d",  max ); 

    return 0;
}