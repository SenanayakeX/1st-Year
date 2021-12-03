#include <stdio.h>
int main()
{
	int fib[10] = {0,1};
	int x;

	for(x=0;x<10;x++)
	{
		fib[x+2] = fib[x] + fib[x+1];
	}

	for(x=0;x<10;x++)
	{
		printf("%d ", fib[x]);
	}
	printf("\n\n");













return 0;
}
