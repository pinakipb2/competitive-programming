//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,b,c,x=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            x = a;
            x = b>c ? b : c;
        }
        else if(b>a && b>c)
        {
            x = b;
            x = a>c ? a : c;
        }
        else
        {
            x = c;
            x = a>b ? a : b;
        }
        cout<<x<<endl;
    }
    return 0;
}