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
    while(t--)
    {
        bool ignored[MAX];
        bool tracked[MAX];
        ll a,b,c,ele;
        cin>>a>>b>>c;
        memset(ignored,0,sizeof(ignored));
        memset(tracked,0,sizeof(tracked));
        for(int i=0;i<b;i++)
        {
            cin>>ele;
            ignored[ele] = true;
        }
        for(int i=0;i<c;i++)
        {
            cin>>ele;
            tracked[ele] = true;
        }
        ll cnt_1=0,cnt_2=0;
        for(int i=1;i<=a;i++)
        {
            cnt_1+= (ignored[i] && tracked[i]);
            cnt_2+= (!ignored[i] && !tracked[i]);
        }
        cout<<cnt_1<<" "<<cnt_2<<endl;
    }
    return 0;
}