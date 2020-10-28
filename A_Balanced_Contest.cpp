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
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll hard=0,cake=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] >= p/2)
            {
                cake++;
            }
            else if(arr[i] <= p/10)
            {
                hard++;
            }
        }
        if(hard==2 && cake==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}