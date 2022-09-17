#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>=y){
		if(x==y) printf("%d",x*90);
		else{
			printf("%d",y*90+(x-y)*60);
		}
	}
	else{
		printf("%d",x*90+(y-x)*40);
	}
	return 0;
}
