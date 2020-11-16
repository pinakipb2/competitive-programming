//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define LOCAL
#define MAX 10000
#define PI 2 * acos(0.0)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << " = " << x << endl;

const int MOD = (int)1e9 + 7;

#ifdef LOCAL
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...) 42
#endif
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << ": " << arg1 << " | ";
    __f(comma + 1, args...);
}

void pinakipb2()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}

int main()
{
    pinakipb2();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k,ans=0;
        cin>>n>>k;
        string s;
        cin >> s;
        k++;
        ll fe=0,ma=0;
        while(ma<n && fe<n){
            while(s[fe]!='I'){
                fe++;
                if(fe>=n){
                    break;
                }
            }
            if(fe>=n){
                break;
            }
            while(s[ma]!='M'){
                ma++;
                if(ma>=n){
                    break;
                }
            }
            if(ma>=n){
                break;
            }
            ll low=fe,high=ma,CNT=0,multiplier=1;
            if(low>high){
                ll temp=low;
                low=high;
                high=temp;
            }
            for (ll i = low+1; i < high; i++) {
                if(s[i]==':'){
                    CNT++;
                }
                if(s[i]=='X'){
                    multiplier=0;
                    break;
                }
            }
            ll power=(k-abs(fe-ma)-CNT)*multiplier;
            if(power<=0){
                if(fe>ma){
                    ma++;
                }
                else{
                    fe++;
                }
            }
            else{
                ans++;
                fe++;
                ma++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}