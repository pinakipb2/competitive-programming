//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define MAX 10000
#define pb push_back
#define all(x) (x).begin(),(x).end()

const int MOD = (int) 1e9 + 7;

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
        ll x,y;
        cin>>x;
        ll a1[x];
        for(int i=0;i<x;i++)
        {
            cin>>a1[i];
        }
        cin>>y;
        ll a2[y];
        for(int i=0;i<y;i++)
        {
            cin>>a2[i];
        }
        int j=0;
        for(int i=0;i<x;i++)
        {
            if(a1[i]==a2[j])
            {
                j++;
            }
        }
        if(j!=y)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}