//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x = a>b ? a : b;
        cout<<x<<" "<<a+b<<endl;
    }
    return 0;
}