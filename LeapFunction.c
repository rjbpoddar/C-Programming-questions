#include<stdio.h>
void leap(int x);
void leap(int x){

    if(x%4==0 || x%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a leap year");
    }
}
int main() {
int n ;
printf("Enter a year: ");
scanf("%d",&n);
leap(n);

return 0;
}