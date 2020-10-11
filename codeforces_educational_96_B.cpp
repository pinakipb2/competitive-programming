//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
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
        ll n,k,res=0;
        cin>>n>>k;
        ll ele;
        vector<ll> arr;
        for(int i=0;i<n;i++)
        {
            cin>>ele;
            arr.push_back(ele);
        }
        sort(arr.begin(), arr.end(), greater<ll>());
        for(int i=0;i<k;i++)
        {
            arr.at(i+1) = arr.at(i)+arr.at(i+1);
            arr.at(i) = 0;
        }
        sort(arr.begin(), arr.end(), greater<ll>());
        ll ans = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());
        cout<<ans<<endl;
    }
    return 0;
}