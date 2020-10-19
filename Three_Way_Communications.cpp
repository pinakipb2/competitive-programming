//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAX 10000

void pinakipb2()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

bool dist(ll a, ll b, ll c, ll d,ll n)
{
    double r = sqrt(pow((a-c),2) + pow((b-d),2));
    if(r<=n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    pinakipb2();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c,d,e,f;
        cin>>n>>a>>b>>c>>d>>e>>f;
        if((dist(a,b,c,d,n) && dist(a,b,e,f,n)) || (dist(a,b,e,f,n) && dist(c,d,e,f,n)) || (dist(c,d,e,f,n) && dist(a,b,c,d,n)))
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