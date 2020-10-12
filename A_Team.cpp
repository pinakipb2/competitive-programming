//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 12-October-2020    14:48:29
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
    int t;
    cin>>t;
    int ans = 0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            if(b==1 || c==1)
            {
                ans += 1;
            }
        }
        else
        {
            if(b==1 && c==1)
            {
                ans += 1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}