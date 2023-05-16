#include<stdio.h>
void amic(int x,int y){
  int sum1=0,sum2=0;
  for(int i=1;i<x;i++)
  {
    if(x%i==0)
     sum1=sum1+i;
  }
  for(int i=1;i<y;i++)
  {
    if(y%i==0)
     sum2=sum2+i;
  }
  if((sum1==y) && (sum2==x))
  {
    printf("%d %d",x,y);
    printf("\n");
  }
  else 
  return ;
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
   for(int i=a;i<=b;i++){
   for(int j=i+1;j<=b;j++)
   {
     amic(i,j);
   }
 }
}