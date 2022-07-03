#include<stdio.h>
    int main(){
int i , s , j ;
for(i = 1 ; i<=4; i++){
    for(s = 1 ; s<= 4-i; s++){
        printf(" ");
    }
    for(j = 1 ; j<=i ; j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}