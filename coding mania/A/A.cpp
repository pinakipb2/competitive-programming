//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAX 10000

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
    ll n,q,ele;
    cin>>n>>q;
    vector<ll> r,g,b;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        r.push_back(ele);
        cin>>ele;
        g.push_back(ele);
        cin>>ele;
        b.push_back(ele);
    }
    ll red = *max_element(r.begin(),r.end());
    ll green = *max_element(g.begin(),g.end());
    ll blue = *max_element(b.begin(),b.end());
    ll x,y,z;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        if(red==x && green ==y &&blue==z)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}