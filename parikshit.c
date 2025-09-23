#include <stdio.h>
int main ()
{
int notes[9]={500,200,100,50,20,10,5,2,1};
int a,i,count;
printf("Enter your value: ");
scanf("%d",&a);

for (i=0;i<9;i++)
    {
    if(a>=notes[i])
       {
           count=a/notes[i];
           a=a%notes[i];
printf("%d notes of Rs. %d\n",count,notes[i]);
       }

}

return 0;
}
