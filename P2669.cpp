#include<stdio.h>
#include<math.h>
int main(){
	int k,sum=0;
	scanf("%d",&k);
	int cnt=0,i,j,z,sum1=0;;
	i=k;
	while(i>0){
		cnt++;
		i-=cnt;
	}
	for(i=1;i<=cnt;i++){
		sum1+=i;
	}
	j=k-sum1;
	z=cnt+1;
	for(i=1;i<=cnt;i++){
			sum+=pow(i,2);
	}
	sum=sum+j*z;
	printf("%d",sum);
	return 0;
}
