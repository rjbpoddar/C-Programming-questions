#include<stdio.h>
    int main(){
    int a ,b;
    printf("Enter the values : ");
    scanf("%d%d", &a, &b);
    a= a+b;
    b= a-b;
    a=a-b;
    printf("Swapping values are : %d %d", a,b);
return 0;
}