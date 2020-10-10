//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,b,res,no[10] = {6,2,5,5,4,5,6,3,7,6},match=0,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        res = a+b;
        while(res!=0)
        {
            d = res%10;
            match += no[d];
            res /= 10;
        }
        cout<<match<<endl;
        match = 0;
    }
    return 0;
}