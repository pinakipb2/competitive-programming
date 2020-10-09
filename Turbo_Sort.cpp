//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a;
    cin>>t;
    vector<ll> arr;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<t;i++)
    {
        cout<<arr.at(i)<<endl;
    }
    return 0;
}