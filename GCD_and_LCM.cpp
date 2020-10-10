//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
    return (a/ gcd(a,b)) *b;
}
int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }
    return 0;
}