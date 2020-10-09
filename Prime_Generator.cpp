//Code Written by PINAKI BHATTACHARJEE
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll T, i, j;
    ll m, n;
    cin >> T;
    while (T--)
    {
        cin >> m >> n;
        if (m == 1)
        {
            m++;
            if (n >= 2)
            {
                cout << m << endl;
                m++;
            }
        }
        if (m == 2)
            cout << m << endl;
        if (m % 2 == 0)
            m++;
        for (i = m; i <= n; i = i + 2)
        {
            bool flag = 1;
            for (j = 2; j * j <= i; ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}