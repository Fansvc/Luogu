#include<stdio.h>
int main(){
	int s,v,i,k,j;
	scanf("%d %d",&s,&v);
	int min,hour;
	if(s%v==0) i=10+s/v;
	else i=11+s/v;
	if(480-i<0){
		j=1440+(480-i);
		hour=j/60;
		min=j%60;
	}
	else {
		j=480-i;
		hour=j/60;
		min=j%60;
	}
	if(hour>9){
		if(min>9) printf("%d:%d",hour,min);
		else printf("%d:0%d",hour,min);
	}
	else{
		if(min>9) printf("0%d:%d",hour,min);
		else printf("0%d:0%d",hour,min);
	}
	return 0;
} 
