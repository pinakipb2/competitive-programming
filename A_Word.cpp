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
    cin>>s;
    ll l=0,u=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            u++;
        else
            l++;
    }
    if(u>l)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}