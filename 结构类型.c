#include <stdio.h>

int main()
{
	struct date{//申明一种结构类型 
		int month;
		int day;
		int year;
	};
	
	struct date today;//定义一个这种结构类型的变量 
	
	today.month=07;
	today.day=31;
	today.year=2014;
	
	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
	return 0;
	 
 } 
