#include<stdio.h>
    int main(){
    int n,a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &a, &b);
    printf("Press 1 for sum, 2 for sub , 3 for multiplication, 4 for division : \n");
    printf("Enter a number : \n");
    scanf("%d", &n);
    switch(n){
    case 1: printf("sum is %d ", a+b);break;
    case 2: printf("Sub is %d ", a-b);break;
    case 3: printf("Mul is %d ", a*b);break;
    case 4: printf("Div is %d ", a/b);break;
    default: printf("Wrong input.");}
return 0;
}