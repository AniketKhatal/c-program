//Program Name:WAP to declare structure name as Player and store 5 player 
//data in it and arrange all player records in descending order by run

#include<stdio.h>
struct player
{
	int id;
	char nm[10];
	int run;
};
struct player p[5];
struct player temp;
int main()
{
	int i,no,j;
	printf("Enter the number of player:");
	scanf("%d",&no);
	printf("\nEnter the details about the player:\n");
	for(i=0;i<no;i++)
	{
		scanf("%d%s%d",&p[i].id,&p[i].nm,&p[i].run);
	}
	printf("\nThe Player before operation\n");
	printf("id\tname\trun\n");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s\t%d",p[i].id,p[i].nm,p[i].run);
	}
	printf("\nThe player runs detail after ascending operation:\n");
	for(i=0;i<no;i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(p[i].run>p[j].run)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("id\tname\trun\n");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s\t%d",p[i].id,p[i].nm,p[i].run);
	}
	return 0;
}

