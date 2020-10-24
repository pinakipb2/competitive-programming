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
    bool flag = true;
    ll index;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='h')
        {
            index = i;
            flag = true;
            break;
        }
        if(i+1==s.length())
        {
            flag = false;
            goto label;
        }
    }
    for(int i=index+1;i<s.length();i++)
    {
        if(s[i]=='e')
        {
            index = i;
            flag = true;
            break;
        }
        if(i+1==s.length())
        {
            flag = false;
            goto label;
        }
    }
    for(int i=index+1;i<s.length();i++)
    {
        if(s[i]=='l')
        {
            index = i;
            flag = true;
            break;
        }
        if(i+1==s.length())
        {
            flag = false;
            goto label;
        }
    }
    for(int i=index+1;i<s.length();i++)
    {
        if(s[i]=='l')
        {
            index = i;
            flag = true;
            break;
        }
        if(i+1==s.length())
        {
            flag = false;
            goto label;
        }
    }
    for(int i=index;i<s.length();i++)
    {        
        if(s[i]=='o')
        {
            index = i;
            flag = true;
            break;
        }
        else if(i+1==s.length())
        {
            flag = false;
            goto label;
        }
    }
    label:
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}