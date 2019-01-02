#include <iostream>


int main(void)
{
	int i[5] = {};
	int f = 0;
	
	while (true){
		int a;
		std::cin >> a;
		if (a==0){
			break;
		}
		for (int i = 0; i < f; i++){
			l[i] = l[i + 1];
		}
		f++;
		l[4] = a;
		if (f==5){
			if (4 * l[0] == l[1] + l[2] + l[3] + l[4]){
				std::cout << l[0];
			}
			if (4 * l[1] == l[0] + l[2] + l[3] + l[4]){
				std::cout << l[1];
			}
		}
		if (f>=5){
			if (4 * l[0] == l[1] + l[2] + l[3] + l[4]){
				std::cout << l[0];
			}
		}
	}
	
	return 0;
}