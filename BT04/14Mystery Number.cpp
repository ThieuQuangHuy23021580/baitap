#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<vector>
#define MAXN 100
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a[MAXN], b[MAXN];
    map<int, int> mp;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (mp[b[i]] % 2 != 0) x = b[i];
    }
    cout << x;



    return 0;
}
