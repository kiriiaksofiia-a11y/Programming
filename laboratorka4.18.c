/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int B[400], j,n, i;
   printf ("Vvedit n: ");
   scanf ("%d", &n);
   printf ("Vvedit %d elementiv: ",2*n);
   for (i=0; i<n*2; i++) {
       scanf ("%d", &B[i]); }

  
int flag = 1; 
    for (i = 0; i < n; i++) {
        if (B[i] != B[i + n]) {
            flag = 0; 
            break;
        }}
   
if (flag==0)  {
   
   for (i=0; i<n*2; i++) {
    if ( (i%2)!=0 )    printf ("Z = %d ", B[i]);
   
   }
    for (i=0; i<n*2; i++) {
    if ( (i%2)==0 )    printf ("Z = %d ", B[i]);
 
   }
}  else 
  for (i=0; i<n*2; i++) {
       printf ("Z = %d ", B[i]);

  } 

    return 0;
}