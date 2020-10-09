//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a = a%b;
        cout<<a<<endl;
    }
    return 0;
}