//Program Name: create a strucure name as player ;

#include<stdio.h>
#include<string.h>
struct player
{
	int pid;
	char pnm[10];
	char eid[20];
	long int prun;
	int pmatch;
}p[3],max;
int main()
{
	//struct player p[3];
	int i,ch,num,n,j,i1,zz,index;
	char nm[10];
    //struct player max=p[0];
    max=p[0];
	printf("Input the details of the player:");
	for(i=0;i<3;i++)
	{
		printf("\nEnter the pid:");
		scanf("\n%d",&p[i].pid);
		printf("Enter the player Name:");
		scanf("\n%s",&p[i].pnm);
		//gets(pnm);
		printf("Enter the player email.id:");
		scanf("\n%s",&p[i].eid);
		printf("Enter the total runs of the player:");
		scanf("\n%ld",&p[i].prun);
		printf("Enter the matches number played by the player:");
		scanf("\n%d",&p[i].pmatch);
	}
	do
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Okk here is the all detais of the player:");
				printf("\nPID\tPNM\tEID\t\tPRUN\tPMATCH");
				for(i=0;i<3;i++)
				{
						printf("\n%d\t%s\t%s\t%ld\t%d",p[i].pid,p[i].pnm,p[i].eid,p[i].prun,p[i].pmatch);	
				}
			break;
			case 2:
			printf("\nDo you want to search player");
			printf("\nEnter the name of the player:");
			scanf("%s",&nm);
			for(i=0;i<3;i++)
			{
				if(strcmp(nm,p[i].pnm)==0)
				{
					n=i;
					printf("\n%d\t%s\t%s\t%ld\t%d",p[n].pid,p[n].pnm,p[n].eid,p[n].prun,p[n].pmatch);
					break;
				}
				else
				{
					printf("\nName not Found");
				}
			}
			break;
			case 3:
				printf("\nokk,Lets arrange the player by its run in desc order:");
				for(i=0;i<3;i++)
				{
					for(j=i+1;j<3;j++)
					{
						if(p[i].prun<p[j].prun)//In descending order
						{
							struct player temp;
							temp=p[i];
							p[i]=p[j];
							p[j]=temp;		
						}
					}
				}
				for(i=0;i<3;i++)
				{
						printf("\n%d\t%s\t%s\t%ld\t%d",p[i].pid,p[i].pnm,p[i].eid,p[i].prun,p[i].pmatch);	
				}
			break;
			case 4:
				printf("\nokk,Lets arrange the player by its run in ascending order:");
				for(i=0;i<3;i++)
				{
					for(j=i+1;j<3;j++)
					{
						if(p[i].prun>p[j].prun)//In ascending order
						{
							struct player temp;
							temp=p[i];
							p[i]=p[j];
							p[j]=temp;		
						}
					}
				}
				for(i=0;i<3;i++)
				{
						printf("\n%d\t%s\t%s\t%ld\t%d",p[i].pid,p[i].pnm,p[i].eid,p[i].prun,p[i].pmatch);	
				}
			break;
			case 5:
				printf("\nokk Delete the perticular player record by its id:");
				printf("\nEnter the id :");
				scanf("%d",&i1);

				for(i=0;i<3;i++)
				{
					if(i1==p[i].eid)
						{
							index=i;
						}
				}
				for(i=index;i<3;i++)
				{
					p[i]=p[i+1];
				}
				for(i=0;i<3-1;i++)
				{
						printf("\n%d\t%s\t%s\t%ld\t%d",p[i].pid,p[i].pnm,p[i].eid,p[i].prun,p[i].pmatch);	
				}
				
			break;
			case 6:
				printf("\n The player details with max run");
				for(i=0;i<3;i++)
				{
					if(p[i].prun > max.prun)
					{
					 zz=i;
					}
				}
				printf("\n%d\t%s\t%s\t%ld\t%d",p[zz].pid,p[zz].pnm,p[zz].eid,p[zz].prun,p[zz].pmatch);
			break;
			default:
				printf("\nCase out of found:");
		}
		
		
		
		
		printf("\nDo you want to continue further:");
		scanf("%d",&num);
	}
	while(num==1);
	return 0;
}

