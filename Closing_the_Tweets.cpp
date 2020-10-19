//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAX 10000

void pinakipb2()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
int main()
{
    pinakipb2();
    ll n,k,num;
    string a;
    cin>>n>>k;
    ll arr[n+1]={0};
    while(k--)
    {
        ll cnt=0;
        cin>>a;
        if(a=="CLICK")
        {
            cin>>num;
            if(arr[num]==0)
            {
                arr[num] = 1;
            }
            else
            {
                arr[num] = 0;
            }
        }
        else if(a=="CLOSEALL")
        {
            for(int i=1;i<n+1;i++)
            {
                arr[i] = 0;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            if(arr[i]==1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}