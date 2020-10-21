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
    double ele;
    cin>>t;
    vector<double> v;
    for(int i=0;i<t;i++)
    {
        cin>>ele;
        if(ele>0)
        {
            v.push_back(ele);
        }
    }
    sort(v.begin(),v.end(),greater<double>());
    ll cnt =0;
    for(int i=0;i<v.size();i++)
    {
        if(cnt==3)
        {
            break;
        }
        if(v[i]<40.345)
        {
            cout<<v[i]<<endl;
            cnt++;
        }
    }
    return 0;
}