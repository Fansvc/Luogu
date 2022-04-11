#include<stdio.h>
struct student{//定义一个结构体分别放入学号姓名，三个成员的分数
    int num;
    char name[10];
    int s[3];
   double ave;
};
int main()
{  struct student a[1000];//建议将空空间定义的大一些，以免造成空间储存不足
  int n,i,j;
 int sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %s %d %d %d",&a[i].num,&a[i].name,&a[i].s[0],&a[i].s[1],&a[i].s[2]);
     sum=a[i].s[0]+a[i].s[1]+a[i].s[2];//求和
 a[i].ave=(sum*1.0)/3;//秋三个数的平均数
 }
 struct student t;//结构类型要一致
 for(i=0;i<n-1;i++)
 {
     for(j=0;j<n-i-1;j++)
     {
     if(a[j].ave<a[j+1].ave)
      {
     t=a[j+1];
     a[j+1]=a[j];
     a[j]=t;
        }
     }
 }
 printf("-----输出-----\n"); 
     for(i=0;i<n;i++){
      printf("%d,%s,%.2lf\n",a[i].num,a[i].name,a[i].ave);//分别输出学号，姓名，以及平均成绩
      }
        return 0;
  }
