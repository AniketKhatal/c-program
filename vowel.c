//wap to take any alphabet from user between a-z and check it is vowel or consonent

#include<stdio.h>
#include<conio.h>
int main(){
	char cons,vow;
	//vow=('a','e','i','o','u','A','E','I','O','U')
	printf("enter the character ;");
	scanf("%c",&cons);
//	cons=='A'||'a'?printf("it is a vowel"):printf("it is not vowel");
//	cons=='E'||'e'?printf("it is a vowel"):printf("it is not vowel");
//	cons=='I'||'i'?printf("it is a vowel"):printf("it is not vowel");
//	cons=='O'||'o'?printf("it is a vowel"):printf("it is not vowel");
//	cons=='U'||'u'?printf("it is a vowel"):printf("it is not vowel");
//	

	cons=='a'||cons=='A'||cons=='e'||cons=='E'||cons=='i'||cons=='I'||cons=='o'||cons=='O'||cons=='u'||cons=='U'?printf("it is a vowel"):printf("it is not vowel");
	return 0;
	
}
