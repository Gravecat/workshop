#include <iostream>
#include <sstream>
using namespace std;

// Checks if a number is a palindrome.
bool is_palindrome(int num)
{
	stringstream ss;
	ss << num;
	string str = ss.str();
	int j = 5;
	if (num < 100000) j = 4;
	for (int i = 0; i <= 2; i++)
	{
		if (str[i] != str[j]) return false;
		j--;
	}
	return true;
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
	cout << largest << endl;
	return 0;
}
