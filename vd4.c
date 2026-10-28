#include<stdio.h>
int main (void)
{
	int i;
	i=1;
	//duyet xuoi 1 den 10
	while(i<=10)
	{
		printf("%d\t",i);
		i=i+1;
	}
	// duyet nguoc tu 10 den 1
	i=10;
	while(i>=1)
		{
			printf("%d\t",i);
			i=i-1;
		}
	return 0;
}
