#include<stdio.h>

    int main(){
        int n,count =1;
        printf("Enter a number : ");
        scanf("%d",&n);
for(int i = 1 ; i<= n ; i++){
    for(int s = 1 ; s<=n-i;s++){
        printf(" ");
    }
    for(int j = 1 ; j<=i ; j++){
        printf("%d ", count);
        count++;
    }
    printf("\n");
}
return 0;
}