#include <stdio.h>
int main()
{
	int m, n, a, b, c;
	scanf("%d",&n);
	a=n%10;
	b=(n/10)%10;
	c=(n/100)%10;
	m=100*a+10*b+c;
	printf("%d=>%d\n ",n,m);
	return 0;
}
