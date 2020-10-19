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
        ll a,b,c;
        cin>>a>>b>>c;
        ll flag[101] = {0};
        ll val[a],min,max,cnt=0;
        for(int i=0;i<a;i++)
        {
            cin>>val[i];
        }
        ll m = b*c;
        for(int i=0;i<a;i++)
        {
            if(val[i]<=m)
            {
                min = 1;
                max = val[i]+m;
                if(min<1)
                {
                    min = 1;
                }
                if(max>100)
                {
                    max = 100;
                }
                for(int j=min;j<=max;j++)
                {
                    flag[j] = 1;
                }
            }
            else
            {
                min = val[i]-m;
                max = val[i]+m;
                if(min<1)
                {
                    min = 1;
                }
                if(max>100)
                {
                    max = 100;
                }
                for(int j=min;j<=max;j++)
                {
                    flag[j] = 1;
                }
            }
        }
        for(int i=1;i<101;i++)
        {
            if(flag[i]==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}