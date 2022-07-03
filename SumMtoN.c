#include<stdio.h>
    int main(){
    int m,n,sum=0;
    printf("Enter the number from where you want to start : ");    
    scanf("%d", &m);
    printf("Enter the number from where you want to start : ");    
    scanf("%d", &n);
    for(m; m<=n;m++){
        sum+= m;
    }
    printf("Sum = %d",sum);
return 0;

}