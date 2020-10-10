//Code Written by PINAKI BHATTACHARJEE
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    while(true)
    {
        ll t,temp;
        bool flag = true;
        cin>>t;
        temp = t;
        if(t!=0)
        {
            ll arr[100000];
            for(int i=1;i<=temp;i++)
            {
                cin>>arr[i];
            }
            for(int i=1;i<=temp;i++)
            {
                if(i != arr[i])
                {
                    ll temp_ele;
                    temp_ele = arr[i];
                    if(arr[temp_ele] != i)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == false)
            {
                cout<<"not ambiguous"<<endl;
            }
            else
            {
                cout<<"ambiguous"<<endl;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}