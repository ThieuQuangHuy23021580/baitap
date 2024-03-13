#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#define MAXN 1000
using namespace std;

int main() {
    int n; cin >> n;
    int a[MAXN];
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mp;
    int b[] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " : " << mp[b[i]] << endl;
    }

    return 0;
}