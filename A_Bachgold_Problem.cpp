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
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}