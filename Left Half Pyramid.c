#include <stdio.h>

int main(void) {
  int i,n,j,k;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { 
      for(j=(n-1);j>=i;j--)
        printf("  ");
      for(k=1;k<=i;k++)
        printf("* ");
      printf("\n");
        
    }
  
  return 0;
}
/*
This code will print below triangle for n=4
      *
    * *
  * * *
* * * *

*/
