//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define LOCAL
#define MAX 10000
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

int main()
{
    pinakipb2();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll start = 0,att_pow,sheet=0,mx = INT_MIN;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                for(int j=i+1;j<n;j++)
                {
                    if(s[j]=='X')
                    {
                        sheet = 0;
                        break;
                    }
                    else if(s[j]==':')
                    {
                        sheet++;
                    }
                    else if(s[j]=='M')
                    {
                        att_pow = k+1-abs(i-j)-sheet;
                        if(att_pow>0)
                        {
                            // mx = max(mx,att_pow);
                            // if(mx==att_pow)
                            // {
                            //     cnt++;
                            // }
                            v.pb(att_pow);
                        }
                    }
                }
            }
        }
        sheet=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='M')
            {
                for(int j=i+1;j<n;j++)
                {
                    if(s[j]=='X')
                    {
                        sheet = 0;
                        break;
                    }
                    else if(s[j]==':')
                    {
                        sheet++;
                    }
                    else if(s[j]=='I')
                    {
                        att_pow = k+1-abs(j-i)-sheet;
                        if(att_pow>0)
                        {
                            // mx = max(mx,att_pow);
                            // if(mx==att_pow)
                            // {
                            //     cnt++;
                            // }
                            v.pb(att_pow);
                        }
                    }
                }
            }
        }
        if(v.empty())
        {
            cout<<0<<endl;
        }
        // for(auto&x: v)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        else
        {
            ll ele = *max_element(all(v));
            int cnt=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==ele)
                {
                    cnt++;
                }
            }
            // trace(cnt);
            cout<<cnt<<endl;
        }
    }
    return 0;
}