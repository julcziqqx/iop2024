#include<iostream>

int nwd(int a , int b){
	int pom;
	while(b != 0){
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}

int main(){
	int a,b;
	std::cin >> a >> b;

	std::cout << a << " " << b << " nwd: " << nwd(a,b) << std::endl;
	if(a <= 0 || b <= 0) {
		std::cout << "Liczby musza byc dodatnie" << std::endl;
		return 1;
	}
	std::cout << a << " " << b << std::endl;

	return 0;
}
