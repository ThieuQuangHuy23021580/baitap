void print()
{
    int n = 5;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = -(n - 1); j <= n - 1; j++)
        {
            if (i + abs(j) < n)cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}