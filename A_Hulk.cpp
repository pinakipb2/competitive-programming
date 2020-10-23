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
    ll n;
    cin>>n;
    string sent, word;
    ll cnt=1,temp=n;
    while(temp--)
    {
        if(cnt%2!=0)
        {
            sent="I hate ";
        }
        else
        {
            sent = "I love ";
        }
        if(temp==0)
        {
            word = "it";
        }
        else
        {
            word = "that";
        }
        cnt++;
        cout<<sent<<word<<" ";
    }
    cout<<endl;
    return 0;
}