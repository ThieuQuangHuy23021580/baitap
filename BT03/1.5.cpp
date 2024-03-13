#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    int l = 0, r = 0, u = 0, d = 0, t = 1, count = 1;
    while (l >= 0 && r >= 0 && u >= 0 && d >= 0 && count <= (n * m))
    {
        l = t - 1; r = m - t; u = t - 1; d = t - 1;
        for (int i = u; i <= d; i++)
            for (int j = l; j <= r; j++)
                a[i][j] = count++;


        l = m - t; u = t; d = n - t - 1;
        for (int i = u; i <= d; i++)
            for (int j = l; j <= r; j++)
                a[i][j] = count++;


        if (count <= n * m)
        {
            l = t - 1; r = m - t; u = n - t; d = n - t;
            for (int i = u; i <= d; i++)
                for (int j = r; j >= l; j--)
                    a[i][j] = count++;


            r = t - 1; u = t; d = n - t - 1;
            for (int i = d; i >= u; i--)
                for (int j = l; j <= r; j++)
                    a[i][j] = count++;
        }

        t++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    return 0;
}