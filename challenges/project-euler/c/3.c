#include <stdio.h>

// Finds the next prime number.
unsigned long long next_prime(unsigned long long num)
{
	do
	{
		int prime = 1;
		num++;
		for (unsigned long long i = 2; i < num; i++)
			if (num % i == 0) { prime = 0; break; }
		if (prime) return num;
	} while(1);
}

int main()
{
	int found = 0;
	unsigned long long num = 600851475143ULL;
	do
	{
		found = 1;
		for (unsigned long long i = 3; i < num; i = next_prime(i))
			if (num % i == 0) { num /= i; found = 0; break; }
	} while(!found);
	printf("%d", num);
	return 0;
}
