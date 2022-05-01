#include <stdio.h>

int main()
{
	for (int a = 1; a <= 997; a++)
		for (int b = 1; b <= (1000 - a); b++)
			for (int c = 1; c <= (1000 - a - b); c++)
			{
				if (a + b + c != 1000) continue;
				if (a * a + b * b == c * c)
				{
					printf("%d", a * b * c);
					return 0;
				}
			}
	return 0;
}
