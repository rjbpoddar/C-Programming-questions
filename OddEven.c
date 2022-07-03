#include<stdio.h>

 int main(){
int a;
printf("Enter the number : ");
scanf("%d", &a);
if(a==0) {
    printf("Neither odd nor even.");
}
else{
if(a%2==0){
printf("EVEN.");
}
else{
printf("ODD.");
}
}
return 0;
}