#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);

int main(void) 
{
	while (1) 
	{
		int n;
		printf("輸入一整數N，輸出第N項費式數列:(-1 to end)");
		scanf("%d", &n);
		if (n == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			fibonacci(n);
		}
	}
}

void fibonacci(int n) 
{
	int n1 = 0, n2 = 1, n3 = 1;
	if (n == 1)	printf("ans = 0\n\n");
	if (n == 2)	printf("ans = 1\n\n");
	if (n == 3)	printf("ans = 1\n\n");
	if (n >= 4) {
		for (int i = 4; i <= n; ++i) {
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2;
		}
		printf("ans = %d\n\n", n3);
	}
}

