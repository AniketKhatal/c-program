//find the roots of quadratic eqation
//quad eqation =ax2+bx+c
//decreminant=b2-4ac
//disciminant>0=   & root2=-b-sqrt(disciminant)/2a
//disciminant==0  root1&2=-b/2a
//disciminant<0 = realpart=-b/2a ,imaginary part=sqrt(-discriminant)/2a

#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,b,c,ch,roo1,root2,imag,discriminant;
printf("enter the value of the a,b,c");
scanf("%f%f%f",&a,&b,&c);
//printf("enter the choice:");
//scanf("%f",&ch);
decriminant=(b*b)-(4*a*c);

switch(decriminant > 0)
{
	case 1:
		root1=(-b+sqrt(discriminant))/2*a;
		root2=(-b-sqrt(discriminant))/2*a;
		printf("the value of root1 and root2:%f%f",root1,root2);
	break;
	case 2:
		switch(disciminant<0)
		{
			case 1:
				root1=-b/(2*a);
				root2=-b/(2*a);
				imag=sqrt(-discriminant)/(2*a);
				printf("the value of root1 and root2,imaginary:%f%f%f",root1,root2,imag);
			break;
			case 2:
			    root1=-b/(2*a);
				root2=-b/(2*a);
				printf("the value of root1 and root2:%f%f",root1,root2)	;		
	default:
		printf("invalid input")			
		}
		}
		return 0;
		
}

