//Program Name:WAP to create structure name as Player
//with field id,name and run and input player details from keyboard and display it.

#include<stdio.h>
struct player
{
	int id;
	char nm[20];
	int run;	
};
struct player p;
int main()
{
	printf("Emter the id name and run of the player:\n");
	scanf("%d%s%d",&p.id,&p.nm,&p.run);
	printf("%d\t%s\t%d",p.id,p.nm,p.run);
	return 0;
}

