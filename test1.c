// // #include <stdio.h>
// // int main() {    

// //     int number1, number2, sum;
    
// //     printf("Enter two integers: ");
// //     scanf("%d %d", &number1, &number2);

// //     // calculating sum
// //     sum = number1 + number2;      
    
// //     printf("%d + %d = %d", number1, number2, sum);
// //     return 0;
// // }

// // // // data type :
// // // int,char,float 

// // // // 2/7/23
// // // long int ,mem required 4byte,
// // // digit conting counting start from 0(n-1) ,value counting start from 1,
// // // short int diff int=basically there is no diff ,tcc compiler common but different in other compiler ;
// // // float data type:1)float:mem req 4 byte  2)double: 3) long double;
// // // chra data type:used to store alphaumeric,sign char:1byte ,range:-128 to 127,unsign char:1byte;
// // // operator in c language: are the some symbole to perform operation;7 operator are there in c:
// // // arithmatic:+-*/%

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     a=11;
//     b=4;
//     c= a%b;
//     printf(" c =",c)
//     return 0;
// }
//  give error bcz float datatype dont use with reminder bcz  

// // wap to store the 1st digit of number
// #include<stdio.h>
// int main(){
//     int num,result;
//     printf("enter the three digit number: \n");
//     scanf("%d",&num);
//     result=num/100;
//     printf("the first digit of number is : %d\n",result);
// }

// // wap to claculate the marks of student
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int s1,s2,s3,s4;
//     float result;
//     printf("enter the marks of student :\n");    //error was there 
//     scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
//     result=(s1+s2+s3+s4)/4;
//     printf("the result of the student is :%f\n",result);
// }

// wap to calculate the total value
#include<stdio.h>
#include<conio.h>
int main(){
    int quant,rate,total;
    printf("enter the quantity and rate of the product :\n");
    scanf("%d%d",&quant,&rate);
    total=quant*rate;
    printf("the total value of the product is: %d",total);
}