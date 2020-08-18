#include<stdio.h>
int powerofTwo(int n)
{
printf("ENTER THE NUMBER n");
scanf("%d",&n);
{
if(n == 0)
  return 0;
if(n&(n-1)==0)
  printf("n IS THE POWER OF 2");
else
  printf("n IS NOT THE POWER OF 2");
}
}

