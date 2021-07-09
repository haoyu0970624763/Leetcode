double myPow(double x, long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return 1.0 / myPow(x, -n);
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {

        double tmp = myPow(x, n / 2);
        if (n % 2 == 1)
        {
            return x * tmp * tmp;
        }
        else
            return tmp * tmp;
    }
}