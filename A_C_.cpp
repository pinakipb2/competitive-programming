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

ll fib(ll n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
} 

int main()
{
    pinakipb2();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,i=0,cnt=0;
        cin>>a>>b>>n;
        ll fibo[MAX];
        if(a<b)
        {
            fibo[0] = a;
            fibo[1] = b;
        }
        else
        {
            fibo[0] = b;
            fibo[1] = a;
        }
        for(int j=2;j<=1000;j++)
        {
            fibo[j] = fibo[j-1] + fibo[j-2];
        }
        while(fibo[i]<=n)
        {
            i++;
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}