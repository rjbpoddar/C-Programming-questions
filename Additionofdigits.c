#include<stdio.h>
    int main(){
    int n , rem = 0,sum=0;
    printf("Enter a number : ");
    scanf("%d", & n);
    int i = 1; 
    while(n!=0){
        rem = n%10;
        sum+=rem;
        n/=10;
    }
    printf("sum = %d", sum);
    
return 0;
    }