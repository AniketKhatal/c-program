
//String:

//#include<stdio.h>
//int main()
//{
//	char ch[90];
//	printf("Enter the Character into array:");
//	scanf("%s",&ch);
//	printf("\nThe character in the array is :%s",ch);
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[20];
//	printf("Enter the char into array:");
//	gets(ch);
//	printf("\nThe array is:%s",ch);
//	int len=strlen(ch);
//	printf("\nLength of the string is:%d",len);
//	return 0;
//}\

//palindrom,reverse,

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[20];
//	int count=0;
//	printf("Enter the string :");
//	gets(ch);
//	while(ch[count]!='\0')
//	{
//		count++;
//	}
//	int a=count;
//	printf("\nThe lenght:%d",a);
//	return 0;
//}

//reverse string prac;

//#include<stdio.h>
//int main()
//{
//	char ch[12],temp;
//	int count=0,len,start,mid,end;
//	printf("Enter the string:");
//	gets(ch);
//	while(ch[count]!='\0')
//	{
//		count++;
//	}
//	len=count;
//	printf("The lenght of the string:%d",len);
//	mid=len/2; 
//	end=len-1;
//	for(start=0;start<end;start++)
//	{
//		temp=ch[start];
//		ch[start]=ch[end];
//		ch[end]=temp;
//		end--;
//	}
//	printf("\nThe string after the operation:%s",ch);
//	return 0;
//}

//palindrome or not string:

//#include<stdio.h>
//int main()
//{
//	char ch[10];
//	printf("Enter the striing:");
//	gets(ch);
//	int count=0;
//	while(ch[count]!='\0')
//	{
//		count++;
//	}
//	int len=count,flag=0;
//	for(int i=0;i<len;i++)
//	{
//		if(ch[i]==ch[len-i-1])
//		{
//			flag=1;
//		}
//	}
//	if(flag)
//	{
//		printf("\nstring is palindrome");
//	}
//	else
//	{
//		printf("\nNot palindrome");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch[10];
//	printf("enter the string:");
//	gets(ch);
//	int count=0;
//	while(ch[count]!='\0')
//	{
//		count++;
//	}
//	int len=count;
//	int flag=0;
//	for(int i=0;i<len;i++)
//	{
//		if(ch[i]==ch[len-i-1])
//		{
//			flag=1;
//		}
//	}
//	if(flag)
//	{
//		printf("\nGiven string is palindrome");
//	}
//	else
//	{
//		printf("\nNot palindrome");
//	}
//	return 0;
//}

//word found or occurence of it in string:
//#include <stdio.h>
//
//int main() {
//    char str[100], word[20];
//    int i, j, flag, count;
//
//    printf("Enter a string: ");
//    fgets(str, sizeof(str), stdin);
//    str[strlen(str)-1] = '\0'; // remove trailing newline character
//
//    printf("Enter a word: ");
//    scanf("%s", word);
//
//    flag = 0;
//    count = 0;
//
//    for (i = 0; str[i] != '\0'; i++) {
//        j = 0;
//        if (str[i] == word[j]) {
//            while (word[j] != '\0') {
//                if (str[i+j] == word[j]) {
//                    j++;
//                }
//                else {
//                    break;
//                }
//            }
//            if (word[j] == '\0') {
//                flag = 1;
//                count++;
//            }
//        }
//    }
//
//    if (flag == 1) {
//        printf("The word '%s' is present in the string.\n", word);
//        printf("The word '%s' occurs %d times in the string.\n", word, count);
//    }
//    else {
//        printf("The word '%s' is not present in the string.\n", word);
//    }
//
//    return 0;
//}
//i/p=hello sun o/p=olleh nus
//}

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len;
    
    // Input string
    printf("Enter a string: ");
    gets( str);
    
    // Find length of string
    for (len = 0; str[len] != '\0'; len++);
    
    // Reverse the string
    for (i = len - 1, j = 0; i >= 0 ; i--, j++) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}




























