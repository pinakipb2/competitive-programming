//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define LOCAL
#define MAX 10000
#define M 1000000007
#define PI 2*acos(0.0)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define DEBUG(x) cerr << #x << " = " << x << endl;

const int MOD = (int) 1e9 + 7;

#ifdef LOCAL
    #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
    #define trace(...) 42
#endif
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << ": " << arg1 << " | ";
    __f(comma + 1, args...);
}

void pinakipb2()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int main()
{
    pinakipb2();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        vector<ll> dp(n);
        for(int i = 0; i < n; i++)
        cin >> arr[i];
        ll res = 0;
        bool flag = false;
        if (arr[0] == 1 && n > 1)
            flag = true;
        else
        {
            for(int i = 0; i < n - 1; i++)
            {
                if (arr[i] == 1)
                {
                    if (arr[i - 1] & 1 == 1)
                        dp[i] = dp[i - 1];
                    else
                        dp[i] = dp[i - 1] + 1;
                }
                else if (arr[i + 1] == 1 && i < n - 2)
                {
                    if (arr[i] & 1 == 1)
                    {
                        res += arr[i];
                        dp[i] = res;
                    }
                    else
                    {
                        dp[i] = res + arr[i];
                        res += arr[i] - 1;
                    }
                }
                else if (arr[i] & 1 == 1)
                {
                    dp[i] = res + arr[i];
                    res += arr[i] - 1;
                }
                else
                {
                    res += arr[i];
                    dp[i] = res;
                }
            }
            if (arr[n - 1] & 1 == 1)
            {
                res += arr[n - 1];
                dp[n - 1] = res;
            }
            else
            {
                dp[n - 1] = res + arr[n - 1];
                res += arr[n - 1] - 1;
            }
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll r;
            cin >> r;
            ll div = r / n;
            ll rem = r % n;
            if (flag)
            {
                if (div == 0 && rem == 1)
                {
                    cout<<1<<endl;
                    continue;
                }
                if (rem > 1)
                {
                    ll ans = (div + 1) % M;
                    cout<<ans<<endl;
                }
                else
                {
                    ll ans = div % M;
                    cout<<ans<<endl;
                }
                continue;
            }
            if (div == 0)
                cout << dp[rem - 1] % M << endl;
            else
            {
                if (rem == 0)
                {
                    ll ans = (((div - 1) * res) + dp[n - 1]) % M;
                    cout<<ans<<endl;
                }
                else
                {
                    ll ans = (((div)*res) + dp[rem - 1]) % M;
                    cout<<ans<<endl;
                }
            }
        }
    }
    return 0;
}