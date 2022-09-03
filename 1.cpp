#include <stdio.h>
#include <string.h>
int main(){
	char a[5];
	int i;
	for(i=0;i<5;i++){
		a[i]=getchar();
	}
	printf("%c%c%c%c%c",a[4],a[3],a[2],a[1],a[0]);
}
