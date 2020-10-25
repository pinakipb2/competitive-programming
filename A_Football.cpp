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
    string s;
    cin>>s;
    ll cnt=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if((s[i]=='0' && s[i+1]=='0')||(s[i]=='1' && s[i+1]=='1'))
        {
            cnt++;
            if((cnt+1)==7)
                break;
        }
        else
            cnt=0;
    }
    if((cnt+1)==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}