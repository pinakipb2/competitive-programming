//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define MAX 10000
#define pb push_back
#define all(x) (x).begin(),(x).end()

const int MOD = (int) 1e9 + 7;

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
        ll arr[5],sum=0;
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
        }
        if(sum==0)
            cout<<"Beginner"<<endl;
        else if(sum==1)
            cout<<"Junior Developer"<<endl;
        else if(sum==2)
            cout<<"Middle Developer"<<endl;
        else if(sum==3)
            cout<<"Senior Developer"<<endl;
        else if(sum==4)
            cout<<"Hacker"<<endl;
        else if(sum==5)
            cout<<"Jeff Dean"<<endl;
    }
    return 0;
}