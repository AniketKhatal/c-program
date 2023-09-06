	 #include<stdio.h>
 int main()
 {
 	int i,j,row,coloumn,a[5][5],sum;
 	printf("enter the row n coloumn of matrix:");
 	scanf("%d%d",&i,&j);
 	printf("enter the element into the matrix:\n");
 	for(row=0;row<i;row++)
 	{
 		for(coloumn=0;coloumn<j;coloumn++)
 		{
 			scanf("%d",&a[row][coloumn]);
		}
	 }
	 printf("addition is:\n");
 	for(row=0;row<i;row++)
 	{
 	    sum=0;
 		for(coloumn=0;coloumn<j;coloumn++)
 		{
 		sum=sum+a[row][coloumn];	
		}
		printf("  =%d \n",sum);
	}
	printf("\n");
	 
 	return 0;
 }


