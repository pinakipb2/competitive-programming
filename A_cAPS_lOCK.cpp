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
    bool flag = true;
    for(int i=1;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<s.length();i++)
        {
            if(i==0)
            {
                if(isupper(s[i]))
                {
                    s[i] = tolower(s[i]);
                }
                else
                {
                    s[i] = toupper(s[i]);
                }
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}