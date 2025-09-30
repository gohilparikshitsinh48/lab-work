#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
int i;
char str[1000];
printf("Enter a string");
scanf("%s",&str);
for(i=0;i>str[i];i++)
{
    if(islower(str[i]))
    {
      str[i]=toupper(str[i]);
    }

    else if(isupper(str[i]))
    {
       str[i]=tolower(str[i]);
    }

}
printf("your toggle string is :%s",str[i]);
return 0;
}
