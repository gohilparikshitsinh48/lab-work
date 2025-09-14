#include<stdio.h>
int main()
{
    int H,T;
    float C;

    printf("Enter your Hardness of steel :");
    scanf("%d",&H);
    printf("Enter your Carbon content of steel :");
    scanf("%f",&C);
    printf("Enter your Tensile strength of steel :");
    scanf("%d",&T);
    if(H>50 && 0.7>C && 5600<T){
        
  printf("YOUR STEEL IS GRADE 10");
 
}
 
 else if(H>50 && 0.7>C){
    printf("your steel is grade 9");
 }
 else if(0.7>C && 5600<T)
 {
    printf("your steel is grade 8 ");
 }
 else if(H>50 && 5600<T)
 {
    printf("your steel is grade 7");
 }
 
 else if(H>50 || 0.7>C || 5600<T) {
 printf("your steel is Grade 6");
 }
 else {
     printf("your steel is Grade 5");
 }

 
 return 0;
}
 
