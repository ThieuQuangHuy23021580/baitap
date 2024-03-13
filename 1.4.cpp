#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

#define MAXN 9
#define MAXM 9
using namespace std;
int main() {

    int n, m; cin >> n >> m;
    char a[MAXN][MAXM];
    int b[MAXN][MAXM];
    fill(b, b + MAXN * MAXM, 0);

    for (int i = 0; i < n; i++)
        for (int j = 0; i < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; i < m; j++)
        {
            if (a[i][j] == '*')
            {
                b[i][j + 1]++;
                b[i][j - 1]++;
                b[i + 1][j]++;
                b[i - 1][j]++;
            }
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            if (a[i][j] == '*') cout << a[i][j];
            else cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}