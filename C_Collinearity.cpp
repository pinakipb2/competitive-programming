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
#define DEBUG(x) cerr << #x << " = " << x << endl;

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
    ll x[t];
    ll y[t];
    for(int i=0;i<t;i++)
    {
        cin>>x[i]>>y[i];
    }
    string ans = "No";
    for(int i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            for(int k=j+1;k<t;k++)
            {
                if((y[k]-y[j])*(x[j]-x[i])==(y[j]-y[i])*(x[k]-x[j]))
                {
                    ans = "Yes";
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}