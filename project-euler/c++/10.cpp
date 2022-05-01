#include <iostream>

#define SIEVE_UNDEFINED	0
#define SIEVE_PRIME		1
#define SIEVE_COMPOSITE	2

// Sieve of Eratosthenes
uint8_t sieve[2000000];

int main()
{
	// First, empty the sieve.
	for (int i = 0; i < 2000000; i++)
		sieve[i] = SIEVE_UNDEFINED;
	sieve[0] = sieve[1] = SIEVE_PRIME;
	
	// Now assign all primes and composites as needed.
	for (int i = 2; i < 2000000; i++)
	{
		if (sieve[i] == SIEVE_UNDEFINED) sieve[i] = SIEVE_PRIME; else continue;
		for (int j = i + i; j < 2000000; j += i)
			sieve[j] = SIEVE_COMPOSITE;
	}
	
	uint64_t total = 0;
	for (int i = 2; i < 2000000; i++)
		if (sieve[i] == SIEVE_PRIME) total += i;
	
	std::cout << total << std::endl;
	return 0;
}
