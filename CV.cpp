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

bool consonant(char c)
{
    c = toupper(c);
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return false;
    else
        return true;
}

bool vowel(char c)
{
    c = toupper(c);
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    else
        return false;
}

int main()
{
    pinakipb2();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            if(consonant(s[i]) && vowel(s[i+1]))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}