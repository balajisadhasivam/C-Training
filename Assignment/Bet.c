#include<stdio.h>
void bet(int x,int y){
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
  if((sum1==y+1) && (sum2==x+1))
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
     bet(i,j);
   }
 }
}