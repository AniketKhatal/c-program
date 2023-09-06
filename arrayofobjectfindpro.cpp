//Program Name:WA Program to create class name as Product with field id,name and price 
//and create array of object using malloc and search product using its id if product 
//found show message product found if product not found show message product not found.

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class product{
	public:
	int id,price;
	char name[20];
	public:
		void setdata(int i,char nm[],int p)
		{
			id=i;
			strcpy(name,nm);
			price=p;		
		}
		void getdata()
		{
			cout<<"\n"<<id<<"\t"<<name<<"\t"<<price<<"\n";
		}
};

int main()     //main function
{
	product *p;
	int id,price;
	char name[20];
	int size;
	cout<<"Enter the size:";
	cin>>size;
	p=(product*)malloc(sizeof(product)*size);
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the data:";
		cin>>id>>name>>price;
		p[i].setdata(id,name,price);
	}
	
	for(int i=0;i<size;i++)
	{
		p[i].getdata();
	}
	int ii,flag=0;
	cout<<"\nEnter the id that you want to search:";
	cin>>ii;
	for(int i=0;i<size;i++)
	{
		if(p[i].id==ii)
		//if((i+1)==ii)
		{
			flag=1;
			p[i].getdata();
		}
	}
	if(flag)
	{
		cout<<"Yoo! product  is present";
	}
	else
	{
		cout<<"Shit product is not present";
	}
	return 0;
}

