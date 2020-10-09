//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,n=0,r;
    cin>>t;
    while(t--)
    {
        cin>>a;
        while(a!=0)
        {
            r = a%10;
            n = n*10+r;
            a = a/10;
        }
        cout<<n<<endl;
        n=0;
    }
    return 0;
}