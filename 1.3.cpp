#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    
    int t; cin >> t;
   
    while (t--) 
    {
        int l, r, dem = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++) 
        {
            string s = to_string(i);
            reverse(s.begin(), s.end());
            int x = stoi(s);
            if (x == i) dem++;
        }
        cout << dem << endl;
    }
}