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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l[n],r[n],ans=1,prod=0,rating=0;
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
        }
        for(int i=0;i<n;i++)
        {
            if(l[i]*r[i]>prod)
            {
                ans = i;
                rating = r[i];
                prod = l[i]*r[i];
            }
            else if(l[i]*r[i]==prod)
            {
                if(r[i]>rating)
                {
                    ans = i;
                    rating = r[i];
                }
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}