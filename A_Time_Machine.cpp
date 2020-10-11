//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void pinakipb2()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif*/
}
int main()
{
    pinakipb2();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(a%400 == 0 || (a%4 == 0 && a%100 !=0))
        {
            cout<<"February 29"<<endl;
        }
        else
        {
            cout<<"March 1"<<endl;
        }
    }
    return 0;
}