//Program Name:
//Wap to declare an int array of size 5 accpet val from user and simply display it 
//algorithm;
//1)declre a[5]
//2)accept the value
//3)dispaly the array
//<<insertion >>extraction
#include<iostream>
using namespace std;
int main()
{
	int a[5],i; //declare
	cout<<"enter the element into array:";//
	for(i=0;i<5;i++)//for(inti;con;incr/dec)
	{
		cin>>a[i];
	}
	cout<<"diplay the array element: ";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<a[i];
	}
	return 0;
}
