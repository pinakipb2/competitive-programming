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
    ll t;
    cin>>t;
    while(t--)
    {
        string a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        ll ans=0;
        if(a==e || a==f || a==g || a==h)
            ans++;
        if(b==e || b==f || b==g || b==h)
            ans++;
        if(c==e || c==f || c==g || c==h)
            ans++;
        if(d==e || d==f || d==g || d==h)
            ans++;
        if(ans>=2)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
    }
    return 0;
}