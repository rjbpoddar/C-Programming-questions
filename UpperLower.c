#include<stdio.h>
int main(){
char c;
int d;
printf("Enter the character : ");
scanf("%c",&c);
d = (int)c+32;
printf("The lower case is : %c",(char)d);
}