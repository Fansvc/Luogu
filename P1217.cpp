#include<stdio.h>
#include<math.h>
int main(){
	int a,b,I,j;
	int cnt=0,result=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		int isPrime=0;
		I=i;
		result=0;
		while(I!=0){
		j=I%10;
		result=result*10+j;	
		I/=10;
		cnt++; 
	}
	if(cnt%2==0&&i!=11){continue;}
	else {if(result==i){
		for(int z=2;z<i;z++){
			if(i%z==0&&i!=0){
				isPrime=1;
				break;
			}
		} 
			if(isPrime==0) printf("%d\n",i);}
			}
}
	
	return 0;
}
