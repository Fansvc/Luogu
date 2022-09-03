#include <stdio.h>
#include <stdlib.h>
int main()
{
   int isPrime;
   int i,j,k;
   int cnt=0;
   for(i=1;i<50;i++){
   	isPrime=1;
   	for(j=2;j<i;j++){
   		if(i%j==0&&i!=2){
   			isPrime=0;
		   }
	   }
	if(isPrime==1){
	   	printf("%d ",i);
	   }
   }
    return 0;
}
