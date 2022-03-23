//sizeof一个运算符 给出类型或变量在内存中的字节数 
#include <stdio.h>
int main(){
	int a;
	a=6;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(a)=%ld\n",sizeof(a));
	return 0;
} 
