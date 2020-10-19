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
        string a,b;
        cin>>a>>b;
        ll min=0,max=0;
        ll len = a.length();
        for(int i=0;i<len;i++)
        {
            if((a[i]!='?' && b[i]!='?')&&(a[i]!=b[i]))
            {
                min++;
            }
            if(a[i]=='?' || b[i]=='?' || (a[i]!=b[i]))
            {
                max++;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}