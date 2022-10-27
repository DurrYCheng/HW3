# include <stdio.h>
#include <stdlib.h>
#include <math.h>
long fibonacci(long t);

int main(void)
{

	for (int i=1;i>=0;i++)
	{
			printf("%d\n", fibonacci(i));
	}
	system("pause");
	return 0;
}

long  fibonacci(long t)
{
	if (t == 0)
	{
		return 0;
	}
	else if (t == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(t - 1) + fibonacci(t - 2);
	}	
}


