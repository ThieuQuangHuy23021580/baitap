#include<iostream>
#include<string>
#define MAXN 10000

using namespace std;
int main() {

    unsigned int n;
    do cin >> n;
    while (n > 10000 || n <= 0);

    int a[MAXN];
    for (int i = 0; i < n; i++)cin >> a[i];

    int tansuat[MAXN + 1];
    fill(tansuat, tansuat + n + 1, 0);
    bool check = false;
    for (int j = 0; j < n; j++)
    {
        tansuat[a[j]]++;
        if (tansuat[a[j]] >= 2) check = true;
    }

    if (check) cout << "yes";
    else cout << "no";
}