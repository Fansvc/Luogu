#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int cnt=0; 
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			cnt++;
			if(cnt<10)
			{
				printf("0");
			}
			printf("%d",cnt);
		}
		printf("\n");
	}
	return 0;
} 
