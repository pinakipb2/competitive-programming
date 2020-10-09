//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,d,n,r=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        n = a;
        do{
            d = a%10;
            r = (r*10) + d;
            a = a/10;
        }while(a!=0);
        if(n==r)
            cout<<"wins"<<endl;
        else
            cout<<"loses"<<endl;
        r=0;
    }
    return 0;
}