//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,k,t;
    int cnt=0;
    cin>>n;
    cin>>k;
    while(n--)
    {
        cin>>t;
        if(t%k==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}