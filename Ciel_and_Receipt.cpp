//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,cnt=0;
    cin>>t;
    ll arr[20];
    for(int i=0;i<12;i++)
    {
        arr[i] = pow(2,i);
    }
    while(t--)
    {
        cin>>a;
        int i=0;
        while(a!=0)
        {
            if(a<=arr[i])
            {
                if(a==arr[i])
                {
                    a = a - arr[i];
                    cnt++;
                }
                else
                {
                    a = a - arr[i-1];
                    i = -1;
                    cnt++;
                }
                
            }
            i++;
        }
        cout<<cnt<<endl;
        cnt = 0;
    }
    return 0;
}