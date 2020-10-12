//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 12-October-2020    15:53:19
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
    int n = a.length();
    vector<ll> v;
    for(int i=0;i<n;i=i+2)
    {
        v.push_back(a[i]-48);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n/2+1;i++)
    {
        cout<<v.at(i);
        if(i!=n/2)
        {
            cout<<"+";
        }
    }
    return 0;
}