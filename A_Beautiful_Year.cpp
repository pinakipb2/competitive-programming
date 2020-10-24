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
    ll t,arr[4],temp;
    cin>>t;
    t++;
    label:
    temp = t;
    ll i=0;
    while(temp!=0)
    {
        arr[i] = temp%10;
        temp/=10;
        i++;
    }
    if(arr[0]==arr[1] || arr[0]==arr[2] || arr[0]==arr[3] || arr[1]==arr[2] || arr[1]==arr[3] || arr[2]==arr[3])
    {
        t++;
        goto label;
    }
    cout<<t<<endl;
    return 0;
}