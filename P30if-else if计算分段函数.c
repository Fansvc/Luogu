#include <stdio.h>
int main()
{
	int x,f;
	scanf("%d",&x);
	if(x<0){f=-1;}
	else if(x==0){f=0;}//此处的if和下面的else其实是这一行else句子里面的，不过这里省略了{} 
	else{f=2*x;}
	printf("%d",f);
	return 0;
}
