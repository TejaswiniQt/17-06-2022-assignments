#include <stdio.h>
#define SIZE 15

char *str_cpy(char *str1, char *str)
{
    int i = 0;
    while(*(str + i) != '\0')
    {
        *(str1 + i) = *(str + i);
        i++;
    }
    *(str1 + i) = '\0';
    return str1;
}
int main()
{
    char str[SIZE];
    char str1[SIZE];
    printf("Enter string: ");
    scanf("%s", str);
    char *ptr = str_cpy(str1, str);
    printf("After string copy: str1 = %s\n", ptr);

    return 0;
}


