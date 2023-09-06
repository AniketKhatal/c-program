//table usuubg while loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,num,tab;
	printf("enter the number that u wnat to print its table :");
	scanf("%d",&num);
	while(i<=10)
//	{
//		tab=i*num;
//		printf("\n%d*%d=%d\n",num,i,(num*i));
//		i++;
//	}
//	printf("\n%d",tab);
for(i=1;i<=10;i++)
{
	printf("\n%d*%d=%d",num,i,(num*i));
}
	return 0;
}
