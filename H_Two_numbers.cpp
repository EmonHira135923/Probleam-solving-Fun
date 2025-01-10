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

    int a,b;
    cin >> a >> b;

    double result = double(a)/double(b);

    cout << "floor" << " " << a << " " << "/" << " " << b << " " << "=" << " " <<  floor(result) << endl;
    cout << "ceil" << " " << a << " " << "/" << " " << b << " " << "=" << " " <<  ceil(result) << endl;
    cout << "round" << " " << a << " " << "/" << " " << b << " " << "=" << " " <<  round(result) << endl;

    return 0;
}