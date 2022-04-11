#include<stdio.h>
void change(int *a);
int main()
{
int i,a[10];
printf("\n 请输入10个整数: \n");
for(i=0;i<=9;i++) scanf("%d",&a[i]);
change(a);
printf("\n 输出结果: \n");
for(i=0;i<=9;i++) printf("%d ", a[i]);
}
void change(int *a)
{
int i,t,k=0;
for(i=1;i<10;i++)
{
if(a[i]<a[k]) k=i;
}
if(k!=0)
{
t=a[0];
a[0]=a[k];
a[k]=t;
}
}
