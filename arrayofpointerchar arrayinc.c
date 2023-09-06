//Program Name:Array of pointer character array in c

#include<stdio.h>
int main()
{
	char *str[]=
	{
		"Mayur",
		"Rakesh",
		"Manoj",
		"Tushar",
		"Aniket"
	};
	printf("String= %s",*str); //o/p=mayur
	printf("\nString= %s",*str+1); //o/p=ayur 
	printf("\nString= %s",(*str)); //o/p=mayur
	printf("\nString= %s",*(str+1));//o/p=Rakesh
	printf("\nString= %s",*(str));//o/p =Mayur
	printf("\nString= %s",*(str+4)+4);//o/p =et
	return 0;
}
