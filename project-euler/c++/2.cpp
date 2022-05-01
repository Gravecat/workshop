#include <iostream>

int main()
{
	int total = 0;
	int a = 1, b = 2;
	do
	{
		if (b % 2 == 0) total += b;
		int c = a + b;
		a = b; b = c;
	} while (b <= 4000000);
	std::cout << total << std::endl;
	return 0;
}
