//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,res = 0;
        cin>>a;
        ll arr[9]={0};
        for(int i=0;i<a;i++)
        {
            ll b,c;
            cin>>b>>c;
            if(b>=1 && b<=8 && c > arr[b])
            {
                arr[b] = c;
            }
        }
        for(int i=1;i<9;i++)
        {
            res += arr[i];
        }
        cout<<res<<endl;
    }
    return 0;
}