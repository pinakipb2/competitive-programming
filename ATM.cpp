//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double y;
    cin>>x>>y;
    if(x+0.50<y && x % 5 == 0)
    {
        y = y-x-0.50;
        cout<<setprecision(2)<<fixed<<y;
    }
    else
    {
        cout<<setprecision(2)<<fixed<<y;
    }
    return 0;
}