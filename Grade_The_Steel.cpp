//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
#define MAX 10000
typedef long long ll;
using namespace std;
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
    double h=50,cc=0.7,ts=5600;
    cin>>t;
    while(t--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        if(a>h&&b<cc&&c>ts)
        {
            cout<<10<<endl;
        }
        else if(a>h&&b<cc)
        {
            cout<<9<<endl;
        }
        else if(b<cc&&c>ts)
        {
            cout<<8<<endl;
        }
        else if(a>h&&c>ts)
        {
            cout<<7<<endl;
        }
        else if(a>h||b<cc||c>ts)
        {
            cout<<6<<endl;
        }
        else
        {
            cout<<5<<endl;
        }
    }
    return 0;
}