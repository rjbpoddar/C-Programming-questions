#include<stdio.h>
int main(){
int t;
printf("Enter the temparature in centrigrade : ");
scanf("%d", &t);
printf("The temparature in farenheight is : %f", t*1.8+32);
return 0;
}