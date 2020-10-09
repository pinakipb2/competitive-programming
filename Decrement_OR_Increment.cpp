//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a;
    cin>>a;
    if(a%4==0)
    {
        a++;
    }
    else
    {
        a--;
    }
    cout<<a<<endl;
    return 0;
}