#include<stdio.h>
int main()
{
    printf("ID : 2102026\n\n");
   int n1,n2,rem_n2_1x,rem_n2_2x,rem;
   scanf("%d%d",&n1,&n2);
   printf("\t%d\n",n1);
   printf("x\t%d\n",n2);
   printf("____________\n");
  rem=n2%10;
  rem_n2_1x=rem*n1;
  printf("%d x %d is %d\n",rem,n1,rem_n2_1x);
  n2=n2/10;
  rem_n2_2x=n2*10*n1;
  printf("%d x %d is %d\n",n2,n1,n2*n1);
   printf("________\n");
   printf("Add them %d",rem_n2_1x+rem_n2_2x);
}
