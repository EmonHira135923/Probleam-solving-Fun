#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

int main()
{
    FASTIO;

    ll a,b;
    cin >> a >> b;

    ll sum;

    sum = a^b;

    cout << sum << endl;
    return 0;
}