//Program Name:

//#include<stdio.h>
//struct chuts{
//	int id;
//	char nm[20];	
//}c[5];
//int main()     //main function
//{
//	int i;
//	printf("Enter the chuts id and name:");
//	for(i=0;i<3;i++)
//	{
//		scanf("%d%s",&c[i].id,&c[i].nm);
//	}
//	printf("\n the info is :");
//	for(i=0;i<3;i++)
//	{
//		printf("%d%s",c[i].id,c[i].nm);
//	}
//	return 0;
//}

#include<stdio.h>
struct bhendi{
	int id ;
	char nm[10];
}*b;
int main()
{
	int size ,i;
	printf("Enter the size of :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d%s",&b->id,&b->nm);
		b++;
	}
	b=b-size;
	for(i=0;i<size;i++)
	{
		printf("%d%s",b->id,b->nm);
		b++;
	}
}
