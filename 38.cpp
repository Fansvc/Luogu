#include <stdio.h>
struct date{
	int year;
	int month;
	int day;
};
int main(){
	int days,i;
	struct date a;
	scanf("%d/%d/%d",&a.year,&a.month,&a.day);
	int mday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(a.year%4==0&&a.year%100!=0||a.year%400==0){
		mday[1]=29;
		for(i=0;i<a.month-1;i++){
			days+=mday[i];
		}
		days+=a.day;
	}
	else{
		for(i=0;i<a.month-1;i++){
			days+=mday[i];
		}
		days+=a.day;
	}
	printf("%d",days);
	return 0;
} 
