#include<stdio.h>
int main(){ 
    int n, i,rem =0,rev=0,real;
    printf("Enter a number : ");
    scanf("%d", &n);
    real = n;
    while(n!=0){
       if(i%10 == 0){
        printf("0");
         i=i/10;
      }
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    printf("Reverse = %d\n", rev);
    if(real == rev){
        printf("Palindrome.");
    }
    else{
        printf("Not palindrome.");
    }

return 0;
}