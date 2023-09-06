//find the roots of quadratic eqation
//quad eqation =ax2+bx+c
//decreminant=b2-4ac
//disciminant>0=   & root2=-b-sqrt(disciminant)/2a
//disciminant==0  root1&2=-b/2a
//disciminant<0 = realpart=-b/2a ,imaginary part=sqrt(-discriminant)/2a

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

float ch,root1,root2,imag,decriminant;
int a,b,c;
printf("enter the value of the a,b,c\n\t");
scanf("%d%d%d",&a,&b,&c);
printf("enter the choice:");
scanf("%f",&ch);
decriminant=(b*b)-(4*a*c);

switch(decriminant > 0)
	{
	case 1:
		root1=(-b+sqrt(decriminant))/2*a;
		root2=(-b-sqrt(decriminant))/2*a;
		printf("the value of root1 =%f\nand root2=%f",root1,root2);
	break;
	case 2:
		switch(decriminant<0)
		{
			case 1:
				root1=-b/(2*a);
				root2=-b/(2*a);
				imag=sqrt(-decriminant)/(2*a);
				printf("the value of root1=%f\n and root2=%f\n,imaginary=%f\n",root1,root2,imag);
			break;
			case 2:
			    root1=-b/(2*a);
				root2=-b/(2*a);
				printf("the value of root1=%f \nand root2=%f\n",root1,root2)	;
				break;		
			default:
				printf("invalid input");		
		}
	}
		return 0;
		
}

