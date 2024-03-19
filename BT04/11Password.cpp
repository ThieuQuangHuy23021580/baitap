#include<bits/stdc++.h>
#define MAXN 100
using namespace std;

int main() {

    unsigned int n; cin >> n;
    string a[MAXN];
    string des = "";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (des != "") break;
        string s = a[i];

        reverse(s.begin(), s.end());
        for (int j = i + 1; j < n; j++)
        {
            if (des != "") break;
            if (s == a[j]) des = a[i];
        }
    }
    cout << des.size() << " " << des[(des.size() - 1) / 2];
}