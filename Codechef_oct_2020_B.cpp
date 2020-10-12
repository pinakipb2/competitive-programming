//𝓒𝓸𝓭𝓮 𝓦𝓻𝓲𝓽𝓽𝓮𝓷 𝓫𝔂 𝓟𝓲𝓷𝓪𝓴𝓲 𝓑𝓱𝓪𝓽𝓽𝓪𝓬𝓱𝓪𝓻𝓳𝓮𝓮
//𝓓𝓪𝓽𝓮 : 11-October-2020    21:26:41
#include <bits/stdc++.h>
#define MAX 10000
typedef long long ll;
using namespace std;
void pinakipb2()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
ll solve(int arr[],int n, ll k)
{
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum < (k*(i+1)))
        {
            return i+1;
        }
    }
    return (sum/k)+1;
}
int main()
{
    pinakipb2();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        ll res,k;
        cin >> n >> k;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        res = solve(arr,n,k);
        cout<<res<<endl;
    }
    return 0;
}