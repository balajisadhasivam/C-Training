#include<stdio.h>
int main(){
    int n;
    int a[100];
    int max1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max1){
            max1=a[i];
        }
    }
    int max2=a[0];
    for(int i=1;i<n;i++)
    {
        if((a[i]>max2) && (a[i]<max1))
        max2=a[i];
    }
    printf("%d\n",max1);
    printf("%d",max2);
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<a;j++){
    //         if(a[i]>a[j]){
    //             int t=a[j];
    //             a[j]=a[i];
    //             a[i]=t;
    //         }
    //     }

    // }
}