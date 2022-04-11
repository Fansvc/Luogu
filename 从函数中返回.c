#include <stdio.h>
//return停止函数执行，并送回一个值
 int max(int a,int b)
 {
 	int ret;
 	if(a>b){
 		ret=a;
	 }else{
	 	ret=b;
	 }
	 return ret;
 }
 int main(){
 	int a,b,c;
 	a=5;
 	b=6;
 	c=max(10,12);
 	c=max(a,b);
 	c=max(c,23);
 	printf("%d\n",max(a,b));
 	return 0;
 }
