#include <cstdio>


bool is_prime (int a)
{
	int t[] = {2, 3, 5,7, 11, 13};
	
	for (int i = 0; i < 6; i++){
		if (a == t[i]){
			return true;
		}
	}
	return false;
}

bool helper (int a, int b)
{
	while (a != 0){
		int r = a %b;
		if (is_prime(r)){
			return false;
		}
	}
	return true;
}


int main()
{
	int a;
	std::cin >> a;
	for (int i = 3; i < 16; i++){
		if (helper(a,i)){
			std::cout << i << std::endl;
			break;
		}
	}
}
