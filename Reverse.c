#include<stdio.h>
  int main(){
    int n,rem = 0,rev=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i = n;
    while(n!=0){
        if(i%10 == 0){
            printf("0");
            i=i/10;
        }
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}