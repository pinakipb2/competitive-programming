//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define MAX 10000
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define DEBUG(x) cerr << #x << " = " << x << endl;

const int MOD = (int) 1e9 + 7;

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
        ll x,y,ans=0;
        cin>>x>>y;
        vector<ll> u,v;
        while(x!=0)
        {
            u.pb(x%10);
            x/=10;
        }
        while(y!=0)
        {
            v.pb(y%10);
            y/=10;
        }
        while(u.size() > v.size())
        {
            v.pb(0);
        }
        while(u.size() < v.size())
        {
            u.pb(0);
        }
        for(int i=0;i<u.size();i++)
        {
            u[i]+=v[i];
        }
        reverse(all(u));
        for(auto &c:u)
        {
            ans = ans*10 + c%10;
        }
        cout<<ans<<endl;
    }
    return 0;
}