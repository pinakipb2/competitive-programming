//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
#define MAX 10000
typedef long long ll;
using namespace std;
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans=2;
        cin>>a>>b;
        if(a==1 || a==2)
        {
            cout<<1<<endl;
            goto label;
        }
        a = a-2;
        if(a>=b)
        {
            while(max(a,b)!=b)
            {
                a = a-b;
                ans++;
            }
        }
        cout<<ans<<endl;
        label:
        ans=0;
    }
    return 0;
}