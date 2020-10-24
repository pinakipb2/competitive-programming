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
    ll t,ans=0;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s=="Tetrahedron")
            ans+=4;
        else if(s=="Cube")
            ans+=6;
        else if(s=="Octahedron")
            ans+=8;
        else if(s=="Dodecahedron")
            ans+=12;
        else if(s=="Icosahedron")
            ans+=20;
    }
    cout<<ans<<endl;
    return 0;
}