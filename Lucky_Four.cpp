//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,cnt=0,b;
    cin>>t;
    while(t--)
    {
        cin>>a;
        while(a>=10)
        {
            b = a%10;
            if(b==4)
            {
                cnt++;
            }
            a = a/10;
        }
        if(a==4)
        {
            cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}