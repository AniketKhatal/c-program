//wap to find the maximum and minimum between two number using function;

#include<stdio.h>

int main()
{
	int max(int, int);
    int min(int ,int);
	int a,b,res1,res2;
	printf("Enter the number two number :");
	scanf("%d%d",&a,&b);
	res1=max(a,b);
	printf("\n The maximum number among two number is: %d",res1);
	res2=min(a,b);
	printf("\nThe minimum number among a an b is :%d",res2);
	return 0;
}
int max(int a,int b) 
{
  	int res1;
  if(a>b)
  {
     res1=a;
  }
  return res1;
}
int min(int a,int b) 
{
    int res2;
    if(a>b)
    {
    	res2=b;
	}
	return res2;
}

