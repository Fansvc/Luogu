#include<stdio.h>
int main(){
	int n,x;
	int cnt=0;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++){
	    int z=i;
	    while(z!=0){
	        int c=z%10;
	        z/=10;
	        if(c==x) cnt++;
	    }
	   }
	
	printf("%d",cnt);
}
