#include<stdio.h>
int main(){
	int no,i,j,count;
	printf("enter number :");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		count =0;
		if(no%i==0)
		{
		printf("\t%d",i);
		}
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
