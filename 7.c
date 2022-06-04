#include <stdio.h>
enum color {red,yellow,green};
void f(enum color c);

int main(){
	enum color t=red;
	scanf("%d",&t);
	f(t);
	return 0;
}

void f(enum color c){
	printf("%d\n",c);
}
