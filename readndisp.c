//read roll no,name,marks of three sub
//calculate total,percentage and  division
//i/p= roll no=784
//name=Jamnes
//marks:phy=70,chem:compnet:90
//o/p:name,marks in phy:,chem:,cna:,totalmarks:240,percentage=80.00,division:first

#include<stdio.h>
#include<conio.h>
int main()
{
	float rollno,total,percen,phy,chem,cna;
	char name,div;
	printf("enter the name of student:");
	scanf("%c",&name);
	printf("\nenter the marks of three subject:");
	scanf("%f%f%f",&phy,&chem,&cna);
	total=phy+chem+cna;
	printf("\nTotal marks :%f",total);
	percen=(total/3)*100;
	printf("\npercentage:%f",percen);
	
	if(percen>50)
	{
		printf("division:second");
	}
	else if(percen>75)
	{
		printf("division:first");
	}
	else if(percen>90)
	{
		printf("division:dictiction");
	}
	else
	{
		printf("are dada study kr nit");
	}
	return 0;
}
