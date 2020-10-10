//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fitSq(ll a)
{
    if(a==1 || a==2 || a==3)
    {
        return 0;
    }
    else
    {
        return ((a/2)-1) + fitSq(a-2);
    }
}
int main()
{
    ll t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<fitSq(a)<<endl;
    }
    return 0;
}