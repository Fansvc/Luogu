#include <stdio.h>
struct student{

	char num[11];
		char name[10];
	int scord;
}a[100];
int main(){
	int n,sum=0,i;
	double ave=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%s%d",&a[i].num,&a[i].name,&a[i].scord);
	}
	for(i=0;i<n;i++){
		sum+=a[i].scord;
	}
	ave=sum/n;
	printf("%.2f\n",ave);
	for(i=0;i<n;i++){
		if(a[i].scord<ave) printf("%s %s\n",a[i].name,a[i].num);
	} 
	return 0;
}
