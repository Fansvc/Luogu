#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        printf("I love Luogu!");
        cout << "I love Luogu!";
    } else if (T == 2) {
        int a=2,u=4,sum=10;
        int b;
        printf("%d %d",a+u,sum-a-u);
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
       int sum=14,i=4;
       printf("%d",sum/i);
       printf("%d",sum-sum%4);
       printf("%d",sum%i);
    } else if (T == 4) {
        printf("%.6f",500.0/3);
    } else if (T == 5) {
    	int i=5;
       printf("%d",i);
    } else if (T == 6) {
       printf("%d",pow(117,0.5));
    } else if (T == 7) {
       int sum=100;
       sum+=10;
       printf("%d",sum);
       sum-=20;
       printf("%d",sum);
       sum-=sum;
       printf("%d",sum);
    } else if (T == 8) {
        double a=3.141593;
        double r=5.0;
        printf("%f",2*r*a);
        printf("%f",a*r*r);
        printf("%f",4/3*a*r*r*r);
    } else if (T == 9) {
    	inr i=22;
       printf("%d",i);
    } else if (T == 10) {
        int n1 = 8, t1 = 30, n2 = 10, t2 = 6;
    int t3 = 10;    //题目要求的时间10分钟
    double inc_rate = (1.0 * n1 * t1 - n2 * t2) / (t1 - t2);//增长速度,注意1.0的用途
    double init_num = n2 * t2 - inc_rate * t2;//初始化队列长度
    double ans = (init_num + t3 * inc_rate) / t3;//求得答案
    cout << ans << endl;
    } else if (T == 11) {
        // 请自行完成问题 11 的代码
    } else if (T == 12) {
        // 请自行完成问题 12 的代码
    } else if (T == 13) {
        // 请自行完成问题 13 的代码
    } else if (T == 14) {
        // 请自行完成问题 14 的代码
    }
    return 0;
} 
