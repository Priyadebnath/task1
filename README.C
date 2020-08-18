#include<stdio.h>
int powerofTwo(int n)
{
  printf("ENTER THE NUMBER n");
  scanf("%d",&n);
  if(n == 0)
  {
    printf("THE GIVEN NUMBER n IS NOT A POWER OF 2");
    return 0;
  }
  while (n != 1)
  {
   if(n%2==0)
   printf("THE GIVEN NUMBER n IS A POWER OF 2");
   else
   printf("THE GIVEN NUMBER n IS NOT A POWER OF 2");
   }
}


 
