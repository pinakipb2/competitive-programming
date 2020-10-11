//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void pinakipb2()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif*/
}
int main()
{
    pinakipb2();
    ll t,a,b,ele;
    cin>>t>>a>>b;
    vector<ll> c,d;
    for(ll i=0;i<t;i++)
    {
        cin>>ele;
        c.push_back(ele);
    }
    for(ll i=0;i<t;i++)
    {
        cin>>ele;
        d.push_back(ele);
    }
    sort(c.begin(),c.end(),greater<ll>());
    sort(d.begin(),d.end(),greater<ll>());
    for(ll i=0;i<t-a;i++)
    {
        c.pop_back();
    }
    for(ll i=0;i<t-b;i++)
    {
        d.pop_back();
    }
    for (ll i = 0; i < d.size(); i++)
    {
        c.push_back(d.at(i));
    }
    sort(c.begin(),c.end(),greater<ll>());
    for(ll i=0;i<c.size()-t;i++)
    {
        c.pop_back();
    }
    ll ans=0;
    for (ll i = 0; i < c.size(); i++)
    {
        ans += c.at(i);
    }
    cout<<ans<<endl;
    return 0;
}