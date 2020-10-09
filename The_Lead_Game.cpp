//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a=0,b=0,x=0,y=0;
    cin>>t;
    ll w=0,l=0,diff,win;
    while(t--)
    {
        cin>>x>>y;
        a=a+x;
        b=b+y;
        win = a>b ? 1:2;
        diff = abs(a-b);
        if(diff>l)
        {
            l = diff;
            w = win;
        }
    }
    cout<<w<<" "<<l;
    return 0;
}