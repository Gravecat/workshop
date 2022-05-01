#include <stdio.h>

// Finds the next prime number.
int next_prime(int num)
{
	do
	{
		int prime = 1;
		num++;
		for (int i = 2; i < num; i++)
			if (num % i == 0) { prime = 0; break; }
		if (prime) return num;
	} while(1);
}

int main()
{
	int prime = 1;
	for (int i = 1; i <= 10001; i++)
		prime = next_prime(prime);
	printf("%d", prime);
	return 0;
}
