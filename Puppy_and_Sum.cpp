//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll add(ll a)
{
    if(a == 1)
    {
        return 1;
    }
    return a+add(a-1);
}
ll sum(ll a, ll b)
{
    while(a--)
    {
        b = add(b);
    }
    return b;
}
int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<sum(a,b)<<endl;
    }
    return 0;
}