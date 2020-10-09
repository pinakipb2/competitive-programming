//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a;
    cin>>t;
    int e=0,o=0;
    while(t--)
    {
        cin>>a;
        if(a%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e>o)
    {
        cout<<"READY FOR BATTLE";
    }
    else
    {
        cout<<"NOT READY";
    }
    return 0;
}