//Program Name:find the word is present or not and also print its occurence if yes;


#include <stdio.h>

int main() {
    char str[100], word[20];
    int i, j, flag, count;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a word: ");
    scanf("%s", word);

    flag = 0;
    count = 0;

    for (i = 0; str[i] != '\0'; i++) 
	{
        j = 0;
        if (str[i] == word[j]) 
		{
            while (word[j] != '\0') 
			{
                if (str[i+j] == word[j]) 
				{
                    j++;
                }
                else 
				{
                    break;
                }
            }
            if (word[j] == '\0') 
			{
                flag = 1;
                count++;
            }
        }
    }

    if (flag == 1) 
	{
        printf("The word '%s' is present in the string.\n", word);
        printf("The word '%s' occurs %d times in the string.\n", word, count);
    }
    else 
	{
        printf("The word '%s' is not present in the string.\n", word);
    }

    return 0;
}
