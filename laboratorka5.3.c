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
   srand(time(NULL)); 
    
    int n,m;
    n=m=4; 
    int A[n][m]; 
    
    for ( int i=0; i<n; i++) {
        for (int  j=0; j<m; j++) {
            
            A[i][j]=  (rand () % 100) -50; 
        printf("%d\t", A[i][j]);
            
        }
        printf("\n"); 
    }
    
    int L[n]  ;  
   
    
    int kd,kv; 
    
     for ( int i=0; i<n; i++) {
         kd=0 ; 
        kv=0 ;
        for (int  j=0; j<m; j++) {
            
            if (A[i][j]<0)  kv=kv+1;
                  if (A[i][j]>0)  kd=kd+1;
            
        }
    
      if (kv>=kd)    printf ("1"); 
      else printf("0"); 
    } 
    
    
return 0;
}

