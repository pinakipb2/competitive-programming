//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    a = a>b ? a-b : a+b;
    cout<<a<<endl;
    return 0;
}