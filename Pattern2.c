#include<stdio.h>
int main(){
int i ,s , j;
for(i = 4; i>=1; i--){
    for(s = 1; s<=4-i;s++){
        printf(" ");}
        for(j = 1; j<=i; j++){
         printf("*");
        }
    printf("\n");
    }
} 