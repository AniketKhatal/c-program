//using switch case =
//case 1=alpha or vowel
//case 2=num is posi or nega
//case 3=greatest amonge three
//case 4=char is in upper or lower
//case 5=num is div by 5 or 11 or not

#include<stdio.h>
#include<conio.h>
int main()
{
  char ch,char1;
  int a,b,c,num,num1,choice;
  printf("case 1=alpha or vowel,\ncase 2=num is posi or nega,\ncase 3=greatest amonge three,\ncase 4=char is in upper or lower,\ncase 5=num is div by 5 or 11 or not");
  printf("\nenter a choice:");
  scanf("%d",&choice);	
  switch(choice)
  {
  	case 1:
  		printf("enter the char:");
  		scanf("%s",&ch);
//  		if(ch<='A' && ch>='Z')
//  		{
//  			ch=ch+32;
//		}
		if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
		{
			printf("its vowel");
		}
		else
		{
			printf("its consonent");
		}
    break;
    case 2:
    	printf("enter the number to check it is positive or negative:");
    	scanf("%d",&num);
    	if(num>=0)
    	{
    		printf("positive number");
		}
		else
		{
			printf("number is negative");
		}
	break ;
    case 3:
    	printf("enter the value of a,b,c");
    	scanf("%d%d%d",&a,&b,&c);
    	if(a>b && a>c)
    	{
    		printf("a is greater");
		}
		else if(b>a && b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	break;
  	case 4:
  		printf("enter the char");
  		scanf("%s",&char1);
  		if(char1>='A' && char1<='Z')
  		{
  			printf("in upper case");
		  }
		  else
		  {
		  	printf("in lower case");
		  }
	break;
	case 5:
		printf("enter the number that u want to check if it is div by 5 or 11 :");
		scanf("%d",&num1);
		if(num1%5==0 && num1%11==0)
		{
			printf("num is div by both 5,11");
		}
		else
		{
			printf("not divisible");
		}
	break;
	default:
		printf("invalid input");
  }	
	return 0;
}
