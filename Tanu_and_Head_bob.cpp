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
        ll a;
        cin>>a;
        string s;
        cin>>s;
        bool flag = true;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='Y')
            {
                cout<<"NOT INDIAN"<<endl;
                flag = false;
                break;
            }
            else if(s[i]=='I')
            {
                cout<<"INDIAN"<<endl;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<"NOT SURE"<<endl;
        }
    }
    return 0;
}