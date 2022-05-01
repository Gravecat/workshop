#include <iostream>

int main()
{
	int the_try = 20;
	bool failed;
	do
	{
		the_try++;
		failed = false;
		for (int i = 20; i > 0; i--)
			if (the_try % i) { failed = true; break; }
	} while(failed);
	std::cout << the_try << std::endl;
	return 0;
}
