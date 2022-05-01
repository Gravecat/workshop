#include <iostream>

// Finds the next prime number.
uint64_t next_prime(uint64_t num)
{
	do
	{
		bool prime = true;
		num++;
		for (unsigned long long i = 2; i < num; i++)
			if (num % i == 0) { prime = false; break; }
		if (prime) return num;
	} while(true);
}

int main()
{
	bool found = false;
	uint64_t num = 600851475143ULL;
	do
	{
		found = true;
		for (uint64_t i = 3; i < num; i = next_prime(i))
			if (num % i == 0) { num /= i; found = false; break; }
	} while(!found);
	std::cout << num << std::endl;
	return 0;
}
