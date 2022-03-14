/*  如果b=0，计算结束，a就是最大公约数，
    否则，计算a/b的余数，让啊吧，b=余数
	回到第一步
	
	 a  b  t
	 12 18 12
	 18 12 6
	 12  6 0
	  6  0  
*/ 
#include <stdio.h>
int main() {
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("gcd=%d\n",a); 	
	return 0;
}
