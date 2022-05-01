#include <stdio.h>

int main()
{
	int sum_of_squares = 0, sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		sum_of_squares += (i * i);
	}
	int square_of_sums = sum * sum;
	printf("Sum of squares: %d\n\rSquare of sums: %d\n\rDifference: %d\n\r", sum_of_squares, square_of_sums, square_of_sums - sum_of_squares);
	return 0;
}
