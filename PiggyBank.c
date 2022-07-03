#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the no. of coins of rs. 10,5,1 : ");
    scanf("%d%d%d",&a,&b,&c);
    float sum = (10*a)+(5*b)+(1*c);
    printf("The total ammount is : %.2f",sum );
return 0;
}