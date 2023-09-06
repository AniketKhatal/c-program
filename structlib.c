//Program Name:wap to create structure library with data members book id,bookname
//author,catagory and price

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct lib
{
	int id ;
	char bknm[10];
	char auth[10];
	char cat[10];
	int price;
};

struct lib l[3];

int main()
{
	int i,ch,num,num1,q,j,in;
	int x,p,ch1,x1,maxprice,index;
	char n[10];
	for(i=0;i<3;i++)
	{
	printf("Enter the id :");
	scanf("\n%d",&l[i].id);
	printf("Enter the book name:");
	scanf("\n%s",&l[i].bknm);
	printf("Enter the Auther name:");
	scanf("\n%s",&l[i].auth);
	printf("Enter the book category:");
	scanf("\n%s",&l[i].cat);
	printf("Enter the Price of the book:");
	scanf("\n%d",&l[i].price);
	printf("\n");
	}
	do{
//	int temp;
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nThe info about the books:");
			printf("\nID\tBnm\tAUTnm\tCAT\tPREICE");
			for(i=0;i<3;i++)
				{
					printf("\n%d\t%s\t%s\t%s\t%d",l[i].id,l[i].bknm,l[i].auth,l[i].cat,l[i].price);
				}
		break;
		
		case 2:
			
			printf("Search book by ID NAME PRICE AUTHER CATAGORY:");
			do
			{
			printf("\nEnter your choice:");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
					printf("Searching book by its id:");
					printf("\nEnter the book id from 1 to 3:");
					scanf("%d",&x);
					
					for(i=0;i<3;i++)
					{
						if(x==l[i].id)
						{
	
							printf("\n%d\t%s\t%s\t%s\t%d",l[x].id,l[x].bknm,l[x].auth,l[x].cat,l[x].price);
							break;
						}
					}
				break;
				
				case 2:
					printf("Searching book by book name:");
					printf("\nEnter the book name:");
					scanf("%s",&n);
					
					for(i=0;i<3;i++)
					{
						if(strcmp(l[i].bknm,n)==0)
						{
							int aa=i;
							printf("yes it is present",n);
							printf("\n%d\t%s\t%s\t%s\t%d",l[aa].id,l[aa].bknm,l[aa].auth,l[aa].cat,l[aa].price);
							break;
						}
					}
				break;
				
				case 3:
					printf("Searching book price:");
					printf("\nEnter the price that you want to search:");
					scanf("%d",&p);
					
					for(i=0;i<3;i++)
					{
						if(p==l[i].price)
						{
							q=i;
							printf("\n%d\t%s\t%s\t%s\t%d",l[q].id,l[q].bknm,l[q].auth,l[q].cat,l[q].price);
							break;
						}
					}
				break;
			}
		case 3:
			//maxprice=l[0].price;
			
			for(i=0;i<3;i++)
			{
				for(j=i+1;j<3;j++)
				{
					if(l[i].price<l[j].price)
					{
						struct lib temp;
						temp=l[i];
						l[i]=l[j];
						l[j]=temp;
					}
				}
			}
			printf("The all Record of book are in the descen order acc to its price:");
			for(i=0;i<3;i++)
			{
				printf("\n%d\t%s\t%s\t%s\t%d",l[i].id,l[i].bknm,l[i].auth,l[i].cat,l[i].price);
			}
			
		break;
		case 4:
			printf("Delete specific record:");
			printf("\nEnter the book index that u want to remove:");
			scanf("%d",&in);
			index=2;
			for(i=0;i<=index;i++)
			{
				if(in==l[i].id)
				{
					for(j=i+1;j<=index;j++)
					{
						l[j-1]=l[j];
					}
					//i--;
					//index--;
				}
			}
			printf("\nAfter the delete operation:\n");
			for(i=0;i<=index;i++)
			{
				printf("\n%d\t%s\t%s\t%s\t%d",l[i].id,l[i].bknm,l[i].auth,l[i].cat,l[i].price);	
			}
		break;
			printf("\nwant to continue with case two of searching:");
			scanf("%d",&num1);
		}
		while(num1==1);
		
	}
		printf("\ndo you want to continue:");
			scanf("%d",&num);
}
	while(num==1);
	return 0;
}

