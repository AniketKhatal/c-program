//Program Name:Structure of winner;

#include<stdio.h>
struct winner
{
	int id;
	char nm[10];
	double pvs;
	int gm;	
};
struct winner w[2];
int main()
{
	int i,ch,x,maxgm=0;
	double maxpvs;
	printf("Enter the id,name,public voting score and golden mikes:\n");
	for(i=0;i<2;i++)
	{
		scanf("%d%s%d%d",&w[i].id,&w[i].nm,&w[i].pvs,&w[i].gm);
	}
	printf("\nThe all details of the winner:");
	printf("\nid\tname\tpvs\tgm\n");
	for(i=0;i<2;i++)
	{
		printf("\n%d\t%s\t%d\t%d",w[i].id,w[i].nm,w[i].pvs,w[i].gm);
	}
	printf("\nEnter the choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			//printf("\nmax pvs:");
			maxpvs=0;
			for(i=0;i<2;i++)
			{
				if(maxpvs<=w[i].pvs)
				{
					maxpvs=w[i].pvs;
					x=i;
				}
			}
			printf("\nThe cotestant whos have max pvs:%d",maxpvs);
			printf("\n%d\t%s\t%d\t%d",w[x].id,w[x].nm,w[x].pvs,w[x].gm);
		break;
		
		case 2:
			for(i=0;i<2;i++)
			{
				if(w[i].pvs>=400000 && w[i].pvs<=2000000)
				{
					printf("\n%d\t%s\t%d\t%d",w[i].id,w[i].nm,w[i].pvs,w[i].gm);
				}
				
			} 
		break;
		case 3:
			for(i=0;i<2;i++)
			{
				if(w[i].pvs>=500000 && w[i].gm>6)
				{
					printf("\nThe 1 winnner is :%d\t%s\t%d\t%d",w[i].id,w[i].nm,w[i].pvs,w[i].gm);
				}
			}
		break;
			
		default:
			printf("invalid choice !");
	}
	
	return 0;
}

