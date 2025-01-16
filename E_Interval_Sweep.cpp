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

    int a,b;
    cin >> a >> b;

    if(abs(a-b)<=1 && (a+b)>0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}