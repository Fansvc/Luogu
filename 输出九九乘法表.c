#include <stdio.h>
int main(){
	int x=1;
	int i=1;
	for(i;i<=9;i++){
		if(x==i){
		printf("%d*%d=%d \n",x,i,x*i);
			x=1;
		}
		
	   else{
			printf("%d*%d=%d ",x,i,x*i);
			x++;
			i--;
			
		}
	
	}
	return 0;
}
