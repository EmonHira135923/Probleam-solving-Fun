#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main()
{
    FASTIO;

    ll a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+') 
    {
        if(a + b == c) cout << "Yes" << endl;
        else cout << a + b << endl;
    }
    else if(s == '-') 
    {
        if(a - b == c) cout << "Yes" << endl;
        else cout << a - b << endl;
    }
    else if(s == '*') 
    {
        if(a * b == c) cout << "Yes" << endl;
        else cout << a * b << endl;
    }

    return 0;
}
