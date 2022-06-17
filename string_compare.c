#include <stdio.h>
#define SIZE 15

int str_cmp(char *str1, char *str2)
{
	int i = 0;
	while(*(str1 + i) != '\0')
	{
		if(*(str1 + i) == *(str2 + i))
		{
			i++;
		}
		else if(*(str1 + i) > *(str2 + i))
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
int main()
{
	char str1[SIZE];
	char str2[SIZE];
	printf("Enter string1: ");
	scanf("%s", str1);
	printf("Enter string2: ");
	scanf("%s", str2);
	int ret = str_cmp(str1, str2);
	if(ret == 0)
	{
		printf("Strings are equal\n");
	}
	else
	{
		printf("Strings are not equal\n");
	}

	return 0;
}


