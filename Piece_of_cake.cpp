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
        string a;
        cin>>a;
        int ans = 0;
        for(int i=0;i<a.length();i++)
        {
            int f1=0,f2=0;
            for(int j=0;j<a.length();j++)
            {
                if(a[i]==a[j])
                {
                    f1++;
                }
                else
                {
                    f2++;
                }
            }
            if(f1==f2)
            {
                ans++;
                break;
            }
        }
        if(ans!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}