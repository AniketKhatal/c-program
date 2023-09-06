//program 8:
//wap using switch case to calculate
//area of circle,ractangle,triangle,square

#include<stdio.h>
int main()
{
	
	int ch,r,l,h,lt,wt,ls;
	float areac,areat,arear,areas;
	printf("1:area of circle\n2:area of triangle\n3:area of ractangle\n4:area of square");
	printf("\nenter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter the radius of circle:");
			scanf("%d",&r);
			areac=3.14*r*r;
			printf("the area of circle is:%f",areac);
		break;
		
		case 2:
			printf("enter the length and height of the triangle:");
			scanf("%d%d",&l,&h);
			areat=0.5*l*h;
			printf("the area of the triangle is:%f",areat);
		break ;
		
		case 3:
			printf("enter the lenght and width of the ractangle:");
			scanf("%d%d",&lt,&wt);
			arear=lt*wt;
			printf("the area of the ractangle is:%f",arear);
		break ;
		
		case 4:
			printf("enter the lenght of the square :");
			scanf("%d",&ls);
			areas=ls*ls;
			printf("the area of the square is:%f",areas);
		break;
		
		default:
			printf("invalid choice");
		}
		return 0;
}
