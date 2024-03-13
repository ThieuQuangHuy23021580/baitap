#include<iostream>
#include<cmath>
#include<map>
#include<vector>
using namespace std;
int main() {
    int x;
    map<int, int> mp;
    vector<int> v;
    do {

        cin >> x;
        mp[x]++;
        if (mp[x] == 1) v.push_back(x);
    } while (x >= 0);
    for (auto i : v) cout << i << " ";

    return 0;
}