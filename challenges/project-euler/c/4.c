#include <stdio.h>

// Checks if a number is a palindrome.
int is_palindrome(int num)
{
	char str[6];
	sprintf(str, "%d", num);
	int j = 5;
	if (num < 100000) j = 4;
	for (int i = 0; i <= 2; i++)
	{
		if (str[i] != str[j]) return 0;
		j--;
	}
	return 1;
}

int main()
{
	int start = 100, largest = 0;
	do
	{
		for (int i = start; i <= 999; i++)
		{
			int result = start * i;
			if (is_palindrome(result) && result > largest) largest = result;
		}
		start++;
	} while(start < 1000);
	printf("%d", largest);
	return 0;
}
