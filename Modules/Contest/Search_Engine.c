#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int find;
        scanf("%d", &find);

        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == find)
            {
                pos = i + 1;
                break;
            }
        }

        if (pos > 0)
        {
            printf("Case %d: %d\n", i, pos);
        }
        if (pos == 0)
        {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}
