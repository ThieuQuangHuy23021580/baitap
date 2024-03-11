#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {

	string s, s1;

	do cin >> s;
	while (s.size() > 100);
	cin >> s1;

	reverse(s.begin(), s.end());

	if (s == s1) cout << "yes";
	else cout << "no";
}