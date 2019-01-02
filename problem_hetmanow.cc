#include <cstdio>
#include <cstdlib>
#include <cmath>


using namespace std;

int main (void)
{
	int tab[8] = { 2, 3, 5, 7, 6, 1, 8, 4};
	int i, j;
	
	for (i = 0; i < 8; i += 2){
		for (j = i + 2; j < 8; j += 2){
			if ( tab[i] == tab[j]){
				cout << "Hetmany sie krzyzuja." << endl;
				exit(1);
			}
			if ( tab[i + 1] == tab[j + 1]){
				cout << "Hetmany sie krzyzuja." << endl;
				exit(1);
			}
		}
	}
	
	for (i = 0; i < 8; i += 2){
		for (j = i + 2; j < 8; j += 2){
			if (tab[i] + tab[i + 1] == tab[j] + tab[j + 2]){
				cout << "Hetmany sie krzyzuja." << endl;
				exit(1);
			}
			if ( abs(tab[i] - tab[i + 1]) == abs(tab[j] - tab[j + 2])){
				cout << "Hetmany sie krzyzuja." << endl;
				exit(1);
			}
		}
	}
	
	cout << "Hetmany sie nie krzyzuja." << endl;
	
	return 0;
}