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
        ll a,b,res=0;
        cin>>a>>b;
        ll arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            if(arr[i]>b)
            {
                res += (arr[i]-b);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}