#include<stdio.h>

int string_length(char *str);
void string_concat(char *str1,char *str2,int len1,int len2);


int main()
{
	char str1[100],str2[20];
	int len1 = 0,len2 = 0;
	printf("Enter string1:");
	scanf("%[^\n]%*c",str1);
	printf("Enter string2:");
	scanf("%[^\n]%*c",str2);
	len1=string_length(str1);
	len2=string_length(str2);
	string_concat(str1,str2,len1,len2);
	printf("Concatenated string is: %s\n",str1);
	return 0;
}


int string_length(char *str)
{
	int len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}

void string_concat(char *str1,char *str2,int len1,int len2)
{
	int i;
	for(i=0;i<=len2;i++)
	{
		str1[len1 + i] = str2[i];
	}
}
