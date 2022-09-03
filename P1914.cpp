#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int n;
	scanf("%d %s",&n,&a);
	for(int i=0;i<strlen(a);i++){
		printf("%c",(a[i]-'a'+n)%26+'a');
	}
}
