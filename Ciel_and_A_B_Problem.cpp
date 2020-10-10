//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans = a-b;
    ans = (ans % 10 != 9 ) ? ans+1 : ans-1;
    cout<<ans<<endl;
    return 0;
}