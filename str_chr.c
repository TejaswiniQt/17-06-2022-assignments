#include <stdio.h>
#define SIZE 15

char *str_chr(char *str, char ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
		{
			return str;
		}
		else
		{
			str++;
		}
	}
}
int main()
{
	char str[SIZE];
	char ch;
	printf("Enter string: ");
	scanf("%s", str);
	printf("Enter the character to be searched: ");
	scanf(" %c", &ch);
	char *ptr = str_chr(str, ch);
	printf("After searching for character: str = %s\n", ptr);

	return 0;
}


