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
        ll arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=n-2;i>=0;i--)
        {   
            for(int j=0;j<=i+1;j++)
            {
                arr[i][j] = arr[i][j] + max(arr[i+1][j], arr[i+1][j+1]);
            }
        }
        cout<<arr[0][0]<<endl;
    }
    return 0;
}