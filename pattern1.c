//program to print the pattern
/*
enter the size :5
    *
   ***
  *****
 *******
*********

   i=row
   j= coloumn    
	
*/

#include <stdio.h>

int main() {
    int size = 0;
    printf("\n");
    printf("enter the size :");
    scanf("%d",&size);
    int i, j, k;
    for(i=1;i<=size;i++) 
	{
        for(j=size;j>i;j--) 
		{
            printf(" ");
        }
        for(k=0;k<(2*i-1);k++) 
		{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
