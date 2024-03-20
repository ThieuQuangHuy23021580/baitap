#include<bits/stdc++.h>
using namespace std;
void random(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)a[i] = rand() % 49;
    map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int m = j + 1; m < n; m++) {
                sum = a[i] + a[j] + a[m];
                mp[sum]++;
                if (sum % 25 == 0 && a[i] != a[j] && a[j] != a[m] && mp[sum] == 1) cout << "(" << a[i] << "," << a[j] << "," << a[m] << ")";
            }
        }
    }
}
int main() {
    double x; cin >> x;
    random(x);
    return 0;
}
