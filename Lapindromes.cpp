//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        string str_a="";
        string str_b="";
        int k = n%2==0 ? n/2 : n/2+1 ;
        for(int i=0;i<n/2;i++)
        {
            str_a+=str[i];
        }
        for(int i=k;i<n;i++)
        {
            str_b+=str[i];
        }
        sort(str_a.begin(),str_a.end());
        sort(str_b.begin(),str_b.end());
        int n1=str_a.length();
        int flag=1;
        for(int i=0;i<n1;i++)
        {
            if(str_a[i]!=str_b[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}