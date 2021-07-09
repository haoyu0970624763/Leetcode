int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int tmp1, tmp2, tmp3;
    tmp1 = 0;
    tmp2 = 1;

    for (int i = 2; i <= n; i++)
    {
        tmp3 = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = tmp3;
    }
    return tmp3;
}