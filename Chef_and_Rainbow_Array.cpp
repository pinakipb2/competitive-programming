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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool flag = true;
        ll i=0,j=n-1;
        if(a[0]!=1)
        {
            flag = false;
        }
        else
        {
            while(i<j)
            {
                if(a[i]!=a[j])
                {
                    flag = false;
                    break;
                }
                if(a[i]!=a[i+1] && a[i]+1!=a[i+1])
                {
                    flag = false;
                    break;
                }
                i++;
                j--;
                
            }
            if(a[i]!=7)
            {
                flag = false;
            }
        }
        if(flag)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}