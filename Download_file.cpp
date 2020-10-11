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
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0;
        cin>>n>>k;
        while(n--)
        {
            ll a,b;
            cin>>a>>b;
            if(k==0)
            {
                ans += a*b;
            }
            else if(a<=k)
            {
                k = k-a;
            }
            else
            {
                a = a-k;
                ans += a*b;
                k = 0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}