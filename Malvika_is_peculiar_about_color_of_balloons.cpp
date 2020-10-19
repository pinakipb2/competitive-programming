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
        ll len = a.length();
        ll cnt_a=0,cnt_b=0;
        for(int i=0;i<len;i++)
        {
            if(a[i]=='a')
            {
                cnt_a++;
            }
            else
            {
                cnt_b++;
            }
        }
        cout<<min(cnt_a,cnt_b)<<endl;
    }
    return 0;
}