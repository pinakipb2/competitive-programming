//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 12-October-2020    21:01:01
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
    ll n,k,m,i;
    cin>>t;
    while(t--)
    {
        ll max=0,ele;
        cin>>n>>k>>m;
        vector<ll> v;
        for(i=0;i<n;i++)
        {
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if((v.at(i)*k)<= m)
            {
                max=i;
            }
            else
            {
                break;
            }
        }
        cout<<v.at(max)<<endl;
    }
    return 0;
}

//This is a wrong answer and is not ac