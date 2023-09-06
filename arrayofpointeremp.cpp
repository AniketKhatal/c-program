//Program Name:program for array of pointer

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class employee{
	public:// I dont understand
	int id;
	char name[20];
	int sal;
	public:
		setdata(int i,char nm[],int s)
		{
			id=i;
			strcpy(name,nm);
			sal=s;
		}
		getdata(void)
		{
			cout<<id<<"\t"<<name<<"\t"<<sal<<"\n";
		}
};
int main()     //main function
{
	employee p,*ptr;
	ptr=&p;
	int i,size,id,salary;
	char name[20];
	cout<<"Enter the size:";
	cin>>size;
	ptr=(employee*)malloc(sizeof(employee)*size);
	for(i=0;i<size;i++)
	{
		cout<<"Enter the data:";
		cin>>id>>name>>salary;
		ptr->setdata(id,name,salary);
		ptr++;
	}
	ptr=ptr-size;
	//sort an array of pointer with
	for(i=0;i<size;i++)
	{
		for(int j=i+1;i<size;i++)
		{
			if(ptr->sal[i]>ptr->sal[j])
			{
				employee temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		ptr->getdata();
		ptr++;
	}
	return 0;
}

