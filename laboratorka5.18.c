/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int X[20][20];
    int Y[20];
    int i,j,n;
    srand(time(NULL));

    printf("n = "); 
    scanf("%d", &n);
    
    for ( i=0; i<n; i++) { 
        for (j=0; j<n; j++) {
        X[i][j]= (rand () % 90)-80;
        printf("%d\t", X[i][j]); }
        printf("\n"); 
    }
    
    int sum,k,d; 
    for ( i=0; i<n; i++) {
        sum=-1;  k= X[i][0]; 
        for ( j=0; j<n; j++) {
            if (X[i][j]<0) {
            d= X[i][j];
            break; }
        }
          
 if (fabs(X[i][j]) > d) 
         sum+=fabs(X[i][j]);
         else  if  (sum==-1)         
         printf ("no value");
            
      Y[i]=sum; }
        for ( int i=0; i<n; i++)
        printf("Вуктор Y: %d\t", Y[i]);
       int  min=  Y[0];
           for ( int i=0; i<n; i++)
           if ( Y[i]<min) min= Y[i]; 
     

    return 0;
}