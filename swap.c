#include<stdio.h>

    int main(){
 int a,b,temp;
 printf("Enter the value of a and b : ");
 scanf("%d%d", &a,&b);
 temp = a;
 a=b ; b= temp;
 printf(" The values are : %d %d .", a,b);
return 0;
}