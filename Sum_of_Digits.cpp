//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll T,a,b=0;
    cin>>T;
    while(T--)
    {
        cin>>a;
        while(a!=0)
        {
            b = b+a%10;
            a = a/10;
        }
        cout<<b<<endl;
        b=0;
    }
    return 0;
}