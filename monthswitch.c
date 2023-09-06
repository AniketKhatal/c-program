//month remaining days

#include<stdio.h>
#include<conio.h>
int main()
{
	int ch;
	printf("enter choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("its jan with 31 days");
		break;
	case 2:
		printf("its feb with 28/29 days");
		break;
	case 3:
		printf("its march with 31 days");
		break;
	case 4:
		printf("its april with 30 days");
		break;
	case 5:
		printf("its may with 31 days");
		break;
	case 6:
		printf("its june with 30 days");
		break;
	case 7:
		printf("its july with 31 days");
		break;
	case 8:
		printf("its august with 31 days");
		break;
	case 9:
		printf("its september with 30 days");
		break;
	case 10:
		printf("its octomber with 31days");
		break;
	case 11:
		printf("its november with 30 days");
		break;
	case 12:
		printf("its december with 31 days");
		break;
	default:
		printf("bro its invalid input");
}
	return 0;
}
