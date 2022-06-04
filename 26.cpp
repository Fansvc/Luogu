#include <stdio.h>
#include <math.h>
int main(){
	int n,m,j;
	scanf("%d",&n);
	if(n<2){
	    	printf("None");
		}
	else{
		int i;
		for(i=2;i<=n;i++){
			m=1;
			j=pow(2,i)-1;
			if(i>2&&i%2==0){
				m=0;
			}
		    if(m){
			printf("%d",j);
			 printf("\n");} 
		}
	}
	return 0; 
}
