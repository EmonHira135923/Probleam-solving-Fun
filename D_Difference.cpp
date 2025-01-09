#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll x = (a*b) - (c*d);

    cout << "Difference = "  << x << endl;

    return 0;
}