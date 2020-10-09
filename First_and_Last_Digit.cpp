//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, a, b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b = a%10;
        while(a>=10)
        {
            a = a/10;
        }
        cout<<a+b<<endl;
    }
    return 0;
}