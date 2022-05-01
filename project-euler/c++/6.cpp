#include <iostream>

int main()
{
	int sum_of_squares = 0, sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		sum_of_squares += (i * i);
	}
	int square_of_sums = sum * sum;
	std::cout << "Sum of squares: " << sum_of_squares << std::endl << "Square of sums: " << square_of_sums << std::endl << "Difference: " << square_of_sums - sum_of_squares << std::endl;
	return 0;
}
