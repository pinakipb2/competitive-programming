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
    string s;
    vector<ll> v;
    while(cin>>s)
    {
        //cout<<s<<" ";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]==',' || s[i]=='}')
            {
            }
            else
                v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    vector<ll>::iterator ip;
    ip = unique(v.begin(),v.end());
    v.resize(distance(v.begin(),ip));
    cout<<v.size()<<endl;
    return 0;
}