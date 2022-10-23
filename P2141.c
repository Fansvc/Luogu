#include <stdio.h>
#include<string.h>
int main()
{
    int n,sum;
    int cnt=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        sum=a[i]+a[i+1];
        for(int j=0;j<n;j++){
            if(sum==a[j]){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}