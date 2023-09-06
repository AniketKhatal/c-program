//week days printing

#include<stdio.h>
#include<conio.h>
int  main()
{
	int ch;
	printf("enter the choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("its monday");
		break;
		case 2:
			printf("its tuesday");
		break;
		case 3:
			printf("its wensday");
		break;
		case 4:
		printf("its thursday");
		break;
		case 5:
		printf("its friday");
		break;
		case 6:
		printf("its saturday");
		break;
		case 7:
		printf("its sunday");
		break;
		default:
			printf("bro u take invalid input");
	}
	return 0;
}
