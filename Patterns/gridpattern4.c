#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<n;col++)
       {
           if(row==col||col==0||row==n-1)
             printf("*");
            else
            printf(" ");
       }

      printf("\n"); 
    }
}