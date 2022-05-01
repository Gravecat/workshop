#include <stdio.h>

int main()
{
	int try = 20, failed;
	do
	{
		try++;
		failed = 0;
		for (int i = 20; i > 0; i--)
			if (try % i != 0) { failed = 1; break; }
	} while(failed);
	printf("%d", try);
	return 0;
}
