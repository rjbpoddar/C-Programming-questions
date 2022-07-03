#include<stdio.h>

 int main(){

     int i , s, j, number;
 for (i =0 ; i<5; i++){
     for (s= 1 ; s<5-i; s++){
         printf(" ");
     }
     number = 1;
     for (j = 0 ; j<=i; j++ ){
         printf("%d ",number);
         number = number * (i-j)/(j+1);
     }
     printf("\n");
 }
return 0;
}