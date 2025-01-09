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

    char x;
    cin >> x;

    if(x=='z') cout << "a" << endl;
    else cout << char(x+1) << endl;

    return 0;
}