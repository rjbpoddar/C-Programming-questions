#include<stdio.h>

    int main(){
    int n , fact = 1; 
    printf("Enter a number : ");
    scanf("%d", &n);
    int i;
    if(n == 0)
    printf("FActorial = 1");
    else{
    for( i = 1 ; i<=n; i++){
    fact = fact *i;    
    }
    printf("Factorial = %d", fact);
    }

return 0;
    }