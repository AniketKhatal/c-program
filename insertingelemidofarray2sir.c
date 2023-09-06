#include<stdio.h>
int main()
{
	int a[6],i,len,index,value;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter values in array\n");
	for(i=0; i<(len-1);i++){
		scanf("%d",&a[i]);
	}
	printf("\nBefore inserting array\n");
	for(i=0;i<len;i++){
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf("Enter index and value\n");
	scanf("%d %d",&index,&value);
	for(i=(len-2); i>=index;i--){
		a[i+1]=a[i];
	}
	a[index]=value;
	printf("\nDisplay array after inserting value\n");
	for(i=0; i<len;i++){
		printf("a[%d] --->%d\n",i,a[i]);
	}
	return 0;
}

