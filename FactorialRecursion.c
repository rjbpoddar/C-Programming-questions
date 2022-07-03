#include<stdio.h>
int fact(int n);
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return  n*fact(n-1);
    }
}
int main() {
int n ;
printf("Enter a number : ");
scanf("%d",&n);
int ans = fact(n);
printf("Factorial is = %d",ans);
return 0;
}