//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 12-October-2020    15:34:09
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
    string a;
    cin>>a;
    vector<ll> v;
    int n = a.length();
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    vector<ll>::iterator ip;
    sort(v.begin(),v.end());
    ip = unique(v.begin(),v.end());
    v.resize(distance(v.begin(),ip));
    n = v.size();
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
   return 0;
}