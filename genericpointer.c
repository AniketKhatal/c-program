//generic pointer

#include<stdio.h>
int main()
{
	void *ptr;
	int a;
	float b;
	printf("the value of a:");
	scanf("%d",&a);
	printf("value of b:");
	scanf("%f",&b);
	ptr=(int*)&a;
	printf("ptr is %d\n",*(int*)ptr);
	ptr=(float*)&b;
	printf("ptr is %f\n",*(float*)ptr);
	return 0;
}
