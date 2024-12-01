#include<iostream>

int main(){
	int a,b;
	std::cin >> a >> b;
	if(a <= 0 || b <= 0) {
		std::cout << "Liczby musza byc dodatnie" << std::endl;
		return 1;
	}
	std::cout << a << " " << b << std::endl;

	return 0;
}
