//1. HAM CO CEIL/FLOOR:
int rnd(double x)
{
    if (x - floor(x) < ceil(x) - x) return floor(x);
    else return ceil(x);

}
//2.HAM KHONG CEIL/FLOOR:
int rnd(double x)
{
    return round(x);

}