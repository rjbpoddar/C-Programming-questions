#include<stdio.h>
int main(){
    int x,k;
    printf("Enter a base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&k);
int power = 1, i;
	for (i = 1; i <= k; ++i) {
		power = power * x;
	}
printf("%d ^ %d = %d",x,k,power);
}
