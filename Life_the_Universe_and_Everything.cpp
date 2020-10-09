//Code Written by PINAKI BHATTACHARJEE
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
int main()
{
    
    int arr[MAX], i = 0;
    for (i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < MAX; i++)
    {
        if (arr[i] == 42)
            break;
        cout << arr[i] << endl;
    }
    return 0;
}