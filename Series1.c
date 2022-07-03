#include<stdio.h>

    int main(){
     int i,n,sum=1;
	printf("Enter any number n:");
	scanf("%d",&n);
	printf("\n1 ");
	for(i=3;i<=n;i++){
		printf("+ %d ",i);
		sum=sum+i;
		i++;
	}
	printf("\nSum is: %d", sum);
}