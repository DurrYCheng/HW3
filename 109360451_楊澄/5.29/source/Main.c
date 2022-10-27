# include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LCM(int x, int y);
int main(void)
{
	int x, y,lcm;
	printf("Enter 2 integer:");
	scanf("%d%d", &x, &y);
	lcm = LCM(x, y);
	printf("LCM=%3d", lcm);

	system("pause");
	return 0;
}

int LCM(int x, int y)
{
	int max,min;
	int lcm,lcm1,lcm2;
	if (x != y)
	{
		max=(x > y) ? x : y;
		min=(x < y) ? x : y;
		lcm = max;
		lcm1 = lcm % max;
		lcm2 = lcm % min;
		while ((lcm1 != 0) || (lcm2 != 0))
		{
			
			lcm1 = lcm % max;
			lcm2 = lcm % min; 
			lcm = lcm + 1;

		}
		return (lcm - 1);

	}
	else
		return x;

}


