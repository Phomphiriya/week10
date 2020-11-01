#include<stdio.h>

int main()
{
	char x[100];
	scanf_s("%s", x,100);
	int y = 0;
	while (x[y] != '\0')
	{
		if (x[y] != x[y + 1])
		{
			printf("%c", x[y]);
		}
		y++;
	}
	return 0;
}