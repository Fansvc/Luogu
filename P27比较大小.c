#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	int max=0;//也可以定义为b 
	if(a>b){max=a;}
	else{max=b;}//定义为b后此行可以省略 
	printf("大的那个是%d\n",max);	
}
