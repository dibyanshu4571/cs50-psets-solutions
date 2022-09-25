#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int n=0;
   do
   {
     n=get_int ("n: ");
   }
   while ( n<2 || n>8);

   for (int i=0;i<=n;i++)
    {
      // first wall
      for (int j=0;j<n-i;j++)
      {
      printf(" ");
      }
      for (int k=0;k<i;k++)
      {
      printf("#");
      }

      //gap between the two walls
      printf("  ");

      // second wall
      for(int l=0;l<i;l++)
      {
        printf("#");
      }
      printf("\n");
    }
 }