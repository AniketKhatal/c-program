	//WAP to input 3 x 3 matrixes and transpose it 
		#include<stdio.h>
		#include<conio.h>

		int main()
		{
		   
		   int a[3][3],i,j,lsum=0,rsum=0,sum;
		   printf("\n\n\n\n");
		   printf("Enter values in matrix\n");
		   for(i=0; i<3; i++)
		   {
		     for(j=0; j<3; j++)
		     {
		       scanf("%d",&a[i][j]);
		     }
		   }
		   printf("\nDisplay matrix before transponse\n");
		   for(i=0; i<3; i++)
		   {
		      for(j=0; j<3; j++)
		      {  printf("%d\t",a[i][j]);
		      }
		      printf("\n");
		   }
		   printf("\nDisplay matrix after transponse\n");
		   for(i=0; i<3; i++)
		   {  for(j=0; j<3; j++)
		      { printf("%d\t",a[j][i]);
		      }
		      printf("\n");
		   }
		   return 0;
		}

