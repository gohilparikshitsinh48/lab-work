#include <stdio.h>
#include <string.h>

int main()
{
char str[1000];
printf("Enter a string");
scanf("%s",&str);
int upercase = strupr(str);
printf("upercase of the string is:%s\n",upercase);
return 0;
}
