//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
#define MAX 10000
typedef long long ll;
using namespace std;
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
        ll n,ele;
        cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            cin>>ele;
            v.push_back(ele);
        }
        ll x = v[0];
        for(int i=0;i<n;i++)
        {
            x = __gcd(x,v[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]/x<<" ";
        }
        cout<<endl;
    }
    return 0;
}