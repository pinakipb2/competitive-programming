//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a==2010 || a==2015 || a==2016 || a==2017 || a==2019)
        {
            cout<<"HOSTED"<<endl;
        }
        else
        {
            cout<<"NOT HOSTED"<<endl;
        }
    }
    return 0;
}