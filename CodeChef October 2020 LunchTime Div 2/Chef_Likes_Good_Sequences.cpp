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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q,x,y;
        cin>>n>>q;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        ll ans=1,cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
                cnt++;
        }
        ans=cnt;
        while(q--)
        {
            cin>>x>>y;
            if(arr[x-1]==y)
                cout<<ans<<endl;
            else
            {
                ll get=0;
                if((x-2)>=0 && arr[x-2]==arr[x-1])
                   get++;
                if(x<n && arr[x]==arr[x-1])
                   get++;
                arr[x-1]=y;
                if((x-2)>=0 && arr[x-2]==arr[x-1])
                   get--;
                if(x<n && arr[x]==arr[x-1])
                   get--;
                ans+=get;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}