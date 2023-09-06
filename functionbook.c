//wap to create function book(int choice);

#include<stdio.h>
int main()
{
	void Book(int);
	int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
	Book(ch);
	return 0;
}
void Book(int ch)
{
	switch(ch)
	{
		case 1:
			printf("book ID:1");
			printf("\nBook Name:Bhagvatgita");
			printf("\nPrice :Priceless");
			printf("\nIt is a spiritua Book");
		break;
		case 2:
			printf("Book Id:2");
			printf("\nBook Name:Wings Of Fire:");
			printf("\nPrice:140 rupees");
			printf("\nIt is a Autobiography of Hon.President of India");
		break;
		case 3:
			printf("Book Id:3");
			printf("\nBook Name:The Complete reference book of Java");
			printf("\nPrice:400");
			printf("\nIt is a Technological Book Auther is Hebert Schildt");
		break;
		default:
			printf("\t\nInvalid Choice");
	}
}
