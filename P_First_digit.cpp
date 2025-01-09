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

    int x;
    cin >> x;

    int val = x/1000;

    if(val%2==0) cout << "EVEN" << endl;
    else cout << "ODD" << endl;

    return 0;
}