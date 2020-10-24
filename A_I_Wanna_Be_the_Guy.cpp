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
    ll t,x,ans=0,n,val;
    cin>>t;
    ll arr[t+1]={0};
    for(int k=0;k<2;k++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            arr[val] = 1;
        }
    }
    for(int i=1;i<t+1;i++)
    {
        if(arr[i]==1)
            ans++;
    }
    if(ans==t)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}