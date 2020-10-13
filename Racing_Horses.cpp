//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 13-October-2020  14:51:32  (IST)(GMT+5:30)
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
    cin>>t;
    while(t--)
    {
        ll a,ele,ans;
        cin>>a;
        vector<ll> v,w;
        for(int i=0;i<a;i++)
        {
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<a-1;i++)
        {
            ans = v.at(i+1)-v.at(i);
            w.push_back(ans);
        }
        sort(w.begin(),w.end());
        cout<<w.at(0)<<endl;
    }
    return 0;
}