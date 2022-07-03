#include<stdio.h>
int main(){    
    int i ,n,sum =0;
    printf("Enter the no till you want the sum : ");
    scanf("%d", &n);
    for(i =1; i<=n;i++){
    sum+=i;        
    }
    printf("Sum = %d",sum);
    return 0;
    i =1;
    while(i<=n){
       sum+=i;
       i++;
    }
    printf("Sum = %d", sum);
    i =1;
    do{
    sum+=i;
    i++;
    }while(i<=n);
    printf("Sum = %d",sum);
    }