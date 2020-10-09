//Code Written by PINAKI BHATTACHARJEE
#include <bits/stdc++.h>
#define size 1000
typedef unsigned long long ll;
using namespace std;
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        int fact[size], carry = 0, j = size - 1;
        fact[size - 1] = 1;
        while (n > 1)
        {
            int x;
            for (int k = size - 1; k >= j; k--)
            {
                x = fact[k] * n + carry;
                fact[k] = x % 10;
                carry = x / 10;
            }
            while (carry > 0)
            {
                fact[--j] = carry % 10;
                carry /= 10;
            }
            n--;
        }
        for (int k = j; k < size; k++)
        {
            cout << fact[k];
        }
        cout << endl;
    }
    return 0;
}