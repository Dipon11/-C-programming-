#include <stdio.h>

int main()
{
    long long n, m, k, ans = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n == 0 || k == 0)
    {
        ans = 0;
    }
    else
    {
        long long mn;
        if (n < m)
        {
            if (n < k)
            {
                mn = n;
            }
            else
            {
                mn = k;
            }
        }
        else
        {
            if (m < k)
            {
                mn = m;
            }
            else
            {
                mn = k;
            }
        }

        n -= mn;
        m -= mn;
        k -= mn;
        ans += mn;

        if (n / 2 < k)
        {
            ans += n / 2;
        }
        else
        {
            ans += k;
        }
    }

    printf("%lld\n", ans);
    return 0;
}