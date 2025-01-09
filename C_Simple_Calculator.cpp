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

    ll a,b;
    cin >> a >> b;

    cout << a << " " << "+" << " " << b << " " << "=" << " " <<  a+b << endl;
    cout << a << " " << "*" << " " << b << " " << "=" << " " << a*b << endl;
    cout << a << " " << "-" << " " << b << " " << "=" << " " <<  a-b << endl;

    return 0;
}