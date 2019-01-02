#include <cstdio>

// fast version of fibonacci algorithm with use of table

void uzupelnianie (int n, int x, long long * tab)
{
	if (x == n){
		return;
	}
	
	*tab = * (tab - 1) + * (tab - 2);
	
	std::cout << *tab << " ";
	
	uzupelnianie (n, x + 1, tab + 1);
}

int fibonacci (int n)
{
	long long tab[n];
	tab[0] = 1;
	std::cout << tab[0];
	tab[1] = 1;
	std::cout << tab[1];
	
	uzupelnianie (n, 2, &tab[2]);
	
	return 0;
}


int main (void)
{
	
	fibonacci(90);
	
	return 0;
}