
//Program Name:struct pointer;

#include<stdio.h>
struct player
{
	int id;
	char nm[10];
};
struct player *ptr;
int main()
{
	int no,i;
	printf("enter the no of player:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("\nEnter the id and name:\n");
		scanf("%d%s",&ptr[i]->id,&ptr[i]->nm);
		ptr++;
	}
	ptr=ptr-no;
	printf("\nThe details of the player:\n");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s",ptr->id,ptr->nm);
	}
	return 0;
}


//#include<stdio.h>
//	
//	struct Employee
//	{
//	  int id;
//	  char name[90];
//	  int sal;
//	};
//	struct Employee *emp;
//	void main()
//	{ 
//
//	  int size,i;
//	  printf("\nEnter  employee count\n");
//	  scanf("%d",&size);
//	  for(i=1; i<=size; i++)
//	  { printf("Enter name id and salary\n");
//	    scanf("%s %d %d",&emp->name,&emp->id,&emp->sal);
//	    emp++;
//	  }
//	  emp =emp-size;
//	  printf("\nDisplay all employee\n");
//	  for(i=1; i<=size; i++)
//	  { printf("%s\t%d\t%d\n",emp->name,emp->id,emp->sal);
//	     emp++;
//	  }
//	    
//	}

