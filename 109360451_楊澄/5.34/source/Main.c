# include <stdio.h>
#include <stdlib.h>
#include <math.h>

int REC(int x, int y);
int main(void)
{
	int x, y,z,rec;
	printf("To recursion X^Y\n");
	printf("X:");
	scanf("%d", &x);
	printf("Y:");
	scanf("%d", &y);
	z = pow(x, y);
	printf("%d = %d", z , x);
	rec = REC(x, y);
	system("pause");
	return 0;
}

int REC(int x, int y)
{
	
	for (int j = y-1; j > 0; j--)
	{
		printf(" * %d",x);
	}
}


