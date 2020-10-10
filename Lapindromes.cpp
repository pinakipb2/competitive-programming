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
        if(n%2!=0)
        {
            for(int i=0;i<n/2;i++)
            {
                str_a+=str[i];
            }
            for(int i=n/2+1;i<n;i++)
            {
                str_b+=str[i];
            }
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                str_a+=str[i];
            }
            for(int i=n/2;i<n;i++)
            {
                str_b+=str[i];
            }
        }
        sort(str_a.begin(),str_a.end());
        sort(str_b.begin(),str_b.end());
        int n1=str_a.length();
        int count=1;
        for(int i=0;i<n1;i++)
        {
            if(str_a[i]!=str_b[i])
            {
                count=0;
                break;
            }
        }
        if(count)
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