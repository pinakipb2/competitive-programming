//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 13-October-2020  19:04:21  (IST)(GMT+5:30)
#include <bits/stdc++.h>
#define MAX 10000
typedef long long ll;
using namespace std;
void pinakipb2()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    pinakipb2();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;
        if (k == 1 && n > 1)
        {
            cout << -1 << endl;
        }
        else if (k * l < n)
        {
            cout << -1 << endl;
        }
        else
        {
            while (n >= 0)
            {
                if (n > k)
                {
                    for (ll i = 0; i < k; i++)
                    {
                        cout << i + 1 << " ";
                    }
                    n = n - k;
                }
                else
                {
                    for (ll i = 0; i < n; i++)
                    {
                        cout << i + 1 << " ";
                    }
                    n = n - k;
                }
            }
            cout << endl;
        }
    }
    return 0;
}