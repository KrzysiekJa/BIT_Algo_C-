#include <cstdio>

using namespace std;


int znajdz_solowa (int * tab){
	int i;
	int result = (* tab);
	for (i = 0; tab[i + 1] != NULL; i++){
		result  = tab[i + 1] ^ result;
	}
	
	return result;
}


int main (void)
{
	int tab[7] = {2, 4, 4, 1, 3, 1, 2};
	
	cout << znajdz_solowa (tab) << endl;
	
	return 0;
}