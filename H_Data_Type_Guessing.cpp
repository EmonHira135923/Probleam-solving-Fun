#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

int main()
{
    FASTIO;

    ll n, k, a;
    cin >> n >> k >> a;

    ll product = n * k;
    ll remainder = product % a;
    ll sum = product / a;

    if (remainder != 0) 
    {
        cout << "double" << endl;
    } 
    else 
    {

        if (sum >= INT_MIN && sum <= INT_MAX) 
        {
            cout << "int" << endl;
        } 
        else 
        {
            cout << "long long" << endl;
        }
    }

    return 0;
}