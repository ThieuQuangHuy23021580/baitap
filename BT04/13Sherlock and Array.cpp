#include<bits/stdc++.h>
#define MAXN 100000
using namespace std;

int main() {

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[MAXN];
        int sum = 0;
        bool check = false;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            sum += a[j];
        }
        int i = 0;
        int sum_l = 0, sum_r = sum;
        while (i < n && !check)
        {

            if (i > 0)sum_l += a[i - 1];
            sum_r -= a[i];

            i++;
            if (sum_l == sum_r)
            {
                check = true;

            }
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
