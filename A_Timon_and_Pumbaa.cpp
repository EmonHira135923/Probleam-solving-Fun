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

    int sum,a,b;

    cin >> a >> b;

    sum = a-b;

    if(sum>0) cout << sum << endl;
    else cout << "0" << endl;

    return 0;
}