#include <stdio.h>
int main()
{
	int x;
	int math=1;
	int i=1;
	scanf("%d",&x);
	int d=x;
	while(x>9){
		x/=10;
		math*=10;
		i++;
	}printf("math=%d\n",math);
	printf("x是%d位数\n",i);
	/*1234/1000=1 1
	  1*1000=1000
	  1234-1000=234
	  
	  234/100=2 2
	  2*100=200
	  234-200=34
	  
	  34/10=3 3
	  3*10=30
	  34-30=4 4
	  用另外一个变量来储存初始值*/
	while(math>0){
		int z=d/math;
		printf("%d",z);
		if(math>9){
			printf(" ");
		}
		d=d%math;
		math/=10;
	}
	
	
	return 0;
}
