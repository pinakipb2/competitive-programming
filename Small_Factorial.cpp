//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fact(ll x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    return x*fact(x-1);
}
int main()
{
    ll t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<fact(a)<<endl;
    }
    return 0;
}