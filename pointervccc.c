//Program Name: to coubt the num of vowel and the cosonent using pointer;

#include<stdio.h>
int main()     //main function
{
	 char ch[10],i,*x,vc=0,cc=0;
	 printf("Enter the string ");
	 scanf("%s",&ch[i]);
	 x=ch;
	 while(*x!='\0')
	 {
	 	if(*x=='A' || *x=='E' ||*x=='I' ||*x=='O' ||*x=='U')
	 		vc++;
	 	else
	 		cc++;
	 	x++;
	 }
	 printf("No of vovwel  is:%d",vc);
	return 0;
}

