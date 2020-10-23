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
int main()
{
    pinakipb2();
    ll n;
    cin>>n;
    ll a=1,b=5,c=10,d=20,e=100;
    ll ans=0;
    while(n!=0)
    {
        if(n>=e)
        {
            ans+=n/e;
            n = n%e;
        }
        else if(n>=d)
        {
            ans+=n/d;
            n = n%d;
        }
        else if(n>=c)
        {
            ans+=n/c;
            n = n%c;
        }
        else if(n>=b)
        {
            ans+=n/b;
            n = n%b;
        }
        else if(n>=a)
        {
            ans+=n/a;
            n = n%a;
        }
    }
    cout<<ans<<endl;
    return 0;
}