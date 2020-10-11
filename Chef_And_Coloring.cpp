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
        string arr;
        ll cnt[3] = {0};
        cin>>arr;
        for(int i=0;i<a;i++)
        {
            if(arr[i] == 'R')
            {
                cnt[0]++;
            }
            else if(arr[i] == 'G')
            {
                cnt[1]++;
            }
            else if(arr[i] == 'B')
            {
                cnt[2]++;
            }
        }
        if((cnt[0] >= cnt[1]) && (cnt[0] >= cnt[2]))
        {
            cout<<a-cnt[0]<<endl;
        }
        else if((cnt[1] >= cnt[0]) && (cnt[1] >= cnt[2]))
        {
           cout<<a-cnt[1]<<endl;
        }
        else if((cnt[2] >= cnt[0]) && (cnt[2] >= cnt[1]))
        {
            cout<<a-cnt[2]<<endl;
        }
    }
    return 0;
}