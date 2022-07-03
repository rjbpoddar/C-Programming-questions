#include<stdio.h>
int main(){
 int n ,sum =0, i,rem = 0;
 printf("Enter  a  number : ");
 scanf("%d",&n);
 i =n;
 while(n!=0){
 rem = n%10;
 sum += rem*rem*rem;
 n/=10;
 }
 printf("armstrong no is : %d\n",sum);
 if(sum==i){
     printf("Armstrong");
 } 
 else{
     printf("Not armstrong.");
 }
}