//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 13-October-2020  08:43:26  (IST)(GMT+5:30)
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
    ll a,cnt=0;
    int d;
    cin>>a;
    while(a!=0)
    {
        d = a%10;
        if(d==4 || d==7)
        {
            cnt++;
        }
        a = a/10;
    }
    if(cnt==4 || cnt==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}