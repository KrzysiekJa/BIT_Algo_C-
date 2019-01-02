#include <iostream>


int sito (int n)
{
	bool tab[n + 1] = {true};
	tab[0] = false;
	tab[1] = false;
	
	for (int i = 2; i * i <= n; i++){
		for (int j = 2; j * i <= n; j++){
			tab[j * i] = false;
		}
	}
	
	for ( int i = 0; i <= n; i++){
		if (tab[i]){
			std::cout << i;
		}
	}
}

int main(void)
{
	bool pierwsza = true;
	unsigned a;
	std::cin >> a;
	
	for ( int i = 0; i * i <= a && pierwsza; i++){
		if ( a % i == 0){
			pierwsza = false;
		}
	}
	
	if (pierwsza){
		std::cout << "tak";
	}
	
	sito(a);
	
	return 0;
}