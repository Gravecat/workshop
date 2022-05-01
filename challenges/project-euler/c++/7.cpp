#include <iostream>

// Finds the next prime number.
int next_prime(int num)
{
	do
	{
		bool prime = true;
		num++;
		for (int i = 2; i < num; i++)
			if (num % i == 0) { prime = false; break; }
		if (prime) return num;
	} while(true);
}

int main()
{
	int prime = 1;
	for (int i = 1; i <= 10001; i++)
		prime = next_prime(prime);
	std::cout << prime << std::endl;
	return 0;
}
