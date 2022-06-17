#include<stdio.h>
#include<stdio_ext.h>

int string_compare(char* str, char* str1)
{
	while(*str && *str1)
	{
		if(*str != *str1)
		{
			return 0;
		}
		str++;
		str1++;
	}
	return (*str1 == '\0');
}

char* str_occurence(char* str, char* str1)                
{
	while(*str != '\0')
	{
		if((*str == *str1) && string_compare(str,str1))
		{
			return str;
		}
		str++;
	}
	return NULL;
}
int main()                                       
{
	char str[100];
	printf("Enter a string containing more than one word : ");
	scanf("%[^\n]%*c", str);
	char str1[20];
	printf("Enter a word to search for : ");
	scanf("%[^\n]%*c", str1);
	printf("%s\n", str_occurence(str, str1));
}


