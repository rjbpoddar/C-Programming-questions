#include<stdio.h>

    int main(){
 int a,b,c;
  printf(" Enter the three values : ");
  scanf("%d %d %d", &a,&b,&c);
  if (a==b && a==c ){
      printf("All are equal.");
  }
 else if(a>=b && a >= c)
  {
  printf(" max is %d ",a);
  }
  else if ( b>=a && b >=c)
  { 
  printf(" max is %d ",b);
  }
else{
printf(" max is %d ",c);
}
return 0;
}