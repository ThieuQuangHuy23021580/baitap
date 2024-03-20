#include<iostream>
using namespace std;

int ucln(int a, int b)
{
    int temp = a % b;
    while (b != 0)
    {
        a = b;
        b = temp;
        if (b != 0)temp = a % b;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Nhap hai so a va b: ";
    cin >> a >> b;

    int x = ucln(a, b);

    if (x == 1) cout << "NT cung nhau";
    else cout << "khong nguyen to cung nhau";

    return 0;
}
