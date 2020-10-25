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
    ll t,cnt=1,maxi=0;
    cin>>t;
    ll arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            cnt++;
        }
        else
        {
            maxi = max(maxi,cnt);
            cnt=1;
        }
    }
    maxi = max(maxi,cnt);
    cout<<maxi<<endl;
    return 0;
}