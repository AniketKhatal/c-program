//Program Name:Union in c programming;

#include<stdio.h>
#include<string.h>
union weight
{
	int kg;
	float au;
	int gm;
}w;
int main()
{
	//union weight w;
	printf("The weight of 1 kg potato:");
	scanf("%d",&w.kg);
	printf("The weight of 1 kg potato:%d",w.kg);
	printf("\nEnter the weight of gold:");
	scanf("%f",&w.au);
	printf("\nEnter the weight of gold:%f",w.au);
	printf("\nEnter the weight in gram:");
	scanf("%d",&w.gm);
	printf("\nEnter the weight in gram:%d",w.gm);
	return 0;
}




//#include <stdio.h>
//#include <string.h>
//union Data
//{
//    int i;
//    float f;
//    char str[20];
//};
//int main ()
//{
//    union Data data;
//    data.i = 10;
//    printf ("data.i : %d\n", data.i);
//    data.f = 220.5;
//    printf ("data.f : %f\n", data.f);
//    strcpy (data.str, "C Programming");
//    printf ("data.str : %s\n", data.str);
//    return 0;
//}
