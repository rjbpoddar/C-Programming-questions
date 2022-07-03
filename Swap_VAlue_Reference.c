#include<stdio.h>
void swapvalue(int x, int y);
void swaprefer(int *x,int *y);
void swapvalue(int x, int y){
int temp;
temp=x;
x=y;
y= temp;
printf("%d , %d",x,y);
}
void swaprefer(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y=temp;
    printf("%d  ,  %d", *x,*y);
}
int main() {
int  a,b;
printf("ENter two digit : ");
scanf("%d%d",&a,&b);
printf("USing call by value we get : ");
swapvalue(a,b);
printf("\nNow the value of a & b is : %d , %d",a,b);
printf("\nUSing call by reference we get : ");
swaprefer(&a,&b);
printf("\nNow the value of a & b is : %d , %d",a,b);

return 0;
}