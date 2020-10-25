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
    ll fibo[MAX];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<60;i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i=0;i<60;i++)
    {
        fibo[i]%=10;
    }
    while(t--)
    {
        ll x;
        cin>>x;
        ll pos = 0;
        while(x>>=1)
        {
            pos++;
        }
        x = ((ll)pow(2,pos)-1)%60;
        cout<<fibo[x]<<endl;
    }
    return 0;
}