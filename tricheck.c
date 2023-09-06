//wap to check the type of tringle

#include<stdio.h>
#include<conio.h>
int main(){
	int s1,s2,s3;
	printf("enter the  3 sides length of tringle:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	(s1==s2||s2==s3)?printf("tringle is equileteral tringle"):
	(s1==s2 || s1==s3 || s2==s3)?printf("tringle is isoscale tringle"):
	printf("scalane tringle");
	return 0;
	
}
