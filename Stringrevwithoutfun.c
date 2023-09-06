//reverse the string without using the function;
//Algorithm;
//take i/p
//count the lenght
//find mid,end=l-1
//reverse the string with help of ur logic
//lastly,print the string

#include<stdio.h>
int main()
{
	void strev(char[]);
	char ch[10];
	printf("Enter the string:");
	gets(ch);
	printf("%s",ch);
	strev(ch);
}
void strev(char ch[])
{
	int count=0,len,mid,end;
	char temp;
	while(ch[count]!='\0')
	{
		count++;
	}
	len=count;
	printf("\nThe length of given string:%d",len);
	mid=len/2;
//	printf("\nThe mid of the string:%d",mid);//ch[mid] ,how to print the per char that are on mid of ch
	end=len-1;
	for(int start=0;start<mid;start++)
	{
		temp=ch[start];
		ch[start]=ch[end];
		ch[end]=temp;
		end--;
	}
	printf("\nThe rev string is:%s",ch);

}
