#include<stdio.h>

int string_length(char *str);
void string_reverse(char *str,int len);

int main()
{
	char str[50];
	int i,len;
	printf("Enter the string:");
	scanf("%[^\n]%*c",str);
	len=string_length(str);
	string_reverse(str,len);
	printf("String after reversing: %s\n",str);
	return 0;
}

int string_length(char *str)
{
	int length = 0;
	while(*str)
	{
		length++;
		str++;
	}
	return length;
}

void string_reverse(char *str,int len)
{
	int i;
	char ch;
	for(i=0;i<=len/2;i++)
	{
		ch = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = ch;
	}
}

