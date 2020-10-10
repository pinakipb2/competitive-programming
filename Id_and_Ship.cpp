//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    char a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a=='b' || a=='B')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(a=='C' || a=='c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(a=='D' || a=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else
        {
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}