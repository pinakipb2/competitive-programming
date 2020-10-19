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
        ll a,b;
        cin>>a>>b;
        string ans = "NO";
        string s[a];
        for(int i=0;i<a;i++)
        {
            cin>>s[i];
        }
        string s1[MAX];
        ll c,d=0;
        for(int i=0;i<b;i++)
        {
            cin>>c;
            while(c--)
            {
                cin>>s1[d];
                d++;
            }
        }
        for(int i=0;i<a;i++)
        {
            ans ="NO";
            for(int j=0;j<d;j++)
            {
                if(s[i]==s1[j])
                {
                    ans = "YES";
                    break;
                }
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}