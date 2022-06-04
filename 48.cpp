#include<stdio.h>
int main(){
	char a[80]={0};
	char b[80]={0};
	gets(a);
	int m,n,i,flag=0;
	char j;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			j=a[i];
			b[i]=j;
			flag=1;
		}
	}
	m=sizeof(b)/sizeof(b[0]);
	if(flag==1){
		for(i=0;i<m;i++){
			printf("%c",b[i]);
		}
	}
	else{
		printf("Not Found");
	}
	return 0;
}
