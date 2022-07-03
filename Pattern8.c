#include<stdio.h>
    int main(){
int  i, j, s, count;
for( i = 1 ; i<=4; i++){
    count =i;
    for(s = 1 ; s<= 4-i;s++){
        printf(" ");
    }
    for(j = 1 ; j<= i;j++,count++){
        printf("%d", count);
        // ++count;
    }
    for(j = 2 ; j<=i;j++,count++){
        printf("%d", count);

    }
    printf("\n");
}
return 0;
}