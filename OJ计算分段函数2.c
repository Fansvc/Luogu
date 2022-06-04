#include <math.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x<0){printf("Invalid Value!");}
        else if(x<=50){printf("%.2f",x*0.53);}
        else {printf("%.2f",50*0.53+(x-50)*0.58);}
       
		 
	return 0;
 } 
