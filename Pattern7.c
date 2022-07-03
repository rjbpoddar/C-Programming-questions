#include<stdio.h>
    int main(){
    int i , j, s;
    for( i = 1 ;i<= 3; i++){
        for(s = 1 ; s <= 3-i; s++){
            printf(" ");
        }
        for(j = 1 ; j<= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
return 0;
}