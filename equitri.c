#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float len,area;
    printf("enter the length of equi triangle:\n");
    scanf("%f",&len);
    area=sqrt(3)/4*(len*len);
    printf("the area of eqi triangle:%f",area);
    return 0;
}

