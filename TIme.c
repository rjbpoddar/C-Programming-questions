#include<stdio.h>
float time (float);
    int main(){
float n ; 
printf("Enter the hour : ");
scanf("%d", &n);
time(n);

// return 0;
}
float time(float x){
    float y = 60*x;
    printf("THe minute is %f ",y);
//  return y;
}