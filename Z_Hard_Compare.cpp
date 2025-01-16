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

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    if(b*log(a) > d*log(c)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}