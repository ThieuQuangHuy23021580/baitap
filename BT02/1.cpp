//PRIME:
#include<iostream>
#include<cmath>
bool nt(int x) {
	if (x == 2) return true;
	for (int i = 3; i <= sqrt(x); i++)
	{
		if (x % i == 0) return false;
	}
	return true;

}
int main() {
	int x; std::cin >> x;
	if (nt(x)) std::cout << "yes";
	else std::cout << "no";
	
	return 0;
}