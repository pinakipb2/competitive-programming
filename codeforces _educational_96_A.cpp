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
    ll i,j,k;
    while(t--)
    {
        ll win;
        cin>>win;
        bool flag = true;
        for(i=0;i<win;i++)
        {
            for(j=0;j<win;j++)
            {
                for(k=0;k<win;k++)
                {
                    if(((3*i)+(5*j)+(7*k))==win)
                    {
                        flag = false;
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        goto jump;
                    }
                }
            }
        }
        jump:
        if(flag)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}