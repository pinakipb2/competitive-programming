//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 12-October-2020    12:18:25
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
    int n,k,ans=0;
    cin>>n>>k;
    int arr[n],val=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    val = arr[k-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0)
        {
            
        }
        else
        {
            if(arr[i]>=val)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}