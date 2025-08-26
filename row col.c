#include <stdio.h>
int main()
{
    int rows,cols;
printf("Enter Your Number Of Rows");
scanf("%d",&rows);

printf("Enter Your Number Of Cols");
scanf("%d",&cols);
for(int i=1;i<=rows; i++){
for (int j=1;j<=cols;j++)
printf("(%d,%d)",i,j);
printf("\n");
}return 0;
}
