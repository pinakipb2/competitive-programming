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
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll arr[d+1] = {0};
    for(int i=k;i<=d;i+=k)
    {
        arr[i] = 1;
    }
    for(int i=l;i<=d;i+=l)
    {
        arr[i] = 1;
    }
    for(int i=m;i<=d;i+=m)
    {
        arr[i] = 1;
    }
    for(int i=n;i<=d;i+=n)
    {
        arr[i] = 1;
    }
    ll cnt=0;
    for(int i=1;i<=d;i++)
    {
        if(arr[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}