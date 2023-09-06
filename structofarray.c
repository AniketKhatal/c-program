//Program Name:array structure,simple programe;

#include<stdio.h>
struct player      //structure declaration;
{	
	int id;
	char nm[10];
	int run;
};
struct player p[5];
int main()
{
	int i, no;
	printf("Enter the number of player:");
	scanf("%d",&no);
	printf("\nEnter the player details:\n");
	for(i=0;i<no;i++)
	{
		scanf("%d%s%d",&p[i].id,&p[i].nm,&p[i].run);
	}
	printf("\nThe player details is :\n");
	printf("id\tname\trun\n");
	for(i=0;i<no;i++)
	{
		printf("\n %d\t%s\t%d",p[i].id,p[i].nm,p[i].run);
	}
	return 0;
}

