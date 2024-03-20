bool checknt(int x)
{
    if (x == 2) return true;
    else
        for (int i = 3; i <= sqrt(x); i++)
            if (x % i == 0) return false;
    return true;
}
