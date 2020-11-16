//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define LOCAL
#define MAX 4000000
#define PI 2*acos(0.0)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define DEBUG(x) cerr << #x << " = " << x << endl;

const int MOD = (int) 1e9 + 7;

#ifdef LOCAL
    #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
    #define trace(...) 42
#endif
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << ": " << arg1 << " | ";
    __f(comma + 1, args...);
}

void pinakipb2()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

void SieveOfEratosthenes(vector<int> &primes)
{
    bool IsPrime[MAX];
    memset(IsPrime, true, sizeof(IsPrime));
    for (ll p = 2; p * p < MAX; p++)
    {   
        if (IsPrime[p])  
        {     
            for (ll i = p * p; i <  MAX; i += p)  
                IsPrime[i] = false;  
        }  
    } 
    for (ll p = 2; p < MAX; p++)  
       if (IsPrime[p])  
            primes.push_back(p);
}  

int main()
{
    //pinakipb2();
    vector<int> primes;
    SieveOfEratosthenes(primes);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
        	cin>>arr[i];
        }
        ll copy[n+1];
        for(int i=0;i<n;i++)
        {
        	copy[i] = primes[i];
        }
        for(int i=0;i<n;i++)
        {
        	copy[i] = max(copy[i], copy[arr[i]-1]);
        }
        for(int i=0;i<n;i++)
        {
        	cout<<copy[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}