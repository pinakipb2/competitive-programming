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
    ll a,b,ar,per;
    cin>>a>>b;
    ar = a*b;
    per = 2*(a+b);
    if(ar>per)
    {
        cout<<"Area"<<endl;
        cout<<ar<<endl;
    }
    else if(ar<per)
    {
        cout<<"Peri"<<endl;
        cout<<per<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<ar<<endl;
    }
    return 0;
}