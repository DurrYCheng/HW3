# include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char i,j;
	printf("Enter a alphbet:");
	scanf("%c", &i);
	if (isalpha(i) != 0)
	{
		if (islower(i) != 0)
		{
			j = toupper(i);
			printf("%c", j);
		}
		else if (isupper(i) != 0)
		{
			j = tolower(i);
			printf("%c", j);
		}
	}

	system("pause");
	return 0;
}



