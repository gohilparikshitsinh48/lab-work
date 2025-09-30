#include <stdio.h>
#include <string.h>

int main()
{
char str[1000];
printf("Enter a string");
scanf("%s",&str);
int lowercase = strlwr(str);
printf("lowercase of the string is:%s\n",lowercase);
return 0;
}
