#include<stdio.h>
#include<math.h>
void zf(int j){
	int cnt=0;
	for(int i=1;i<=pow(j,2);i++){
		printf("%02d",i);
		cnt++;
		if(cnt==j) {
			printf("\n");
			cnt=0;
		}
	}
	printf("\n");
}
void sj(int j){
	int cnt=1,b=1;
	while(j!=0){
		for(int i=0;i<j-1;i++){
			printf("  ");
		}
		for(int i=1;i<=cnt;i++){
			printf("%02d",b++);
		}
		printf("\n");
		cnt++;
		j--;
}
}

int main(){
	int n;
	scanf("%d",&n);
	zf(n);
	sj(n);
}
