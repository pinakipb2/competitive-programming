//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a;
    int i=5,cnt=0;
    cin>>t;
    ll arr[6] = {1,2,5,10,50,100};
    while(t--)
    {
        cin>>a;
        while(a!=0)
        {
            if(a>=arr[i])
            {
                if(a%arr[i]==0)
                {
                    cnt += a/arr[i];
                    a = 0;
                }
                else
                {
                    cnt += a/arr[i];
                    a = a%arr[i];
                }
                
            }
            i--;
        }
        cout<<cnt<<endl;
        cnt = 0;
        i = 5;
    }
    return 0;
}