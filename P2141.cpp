#include<stdio.h>
#include<stdlib.h>
int a[110];
int n;
int num=0;  
int v[110];  
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       scanf("%d",&a[i]);
    for(int i=1;i<n;i++)   
       for(int j=i+1;j<=n;j++)   
          for(int k=1;k<=n;k++)   
            if (a[i]+a[j]==a[k]&&v[k]==0)   
                {
                   num++;
                   v[k]=1;  
                }
    printf("%d",num);
    return 0;
}
