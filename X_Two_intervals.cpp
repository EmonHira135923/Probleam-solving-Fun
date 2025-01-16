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

    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int mn_value = min(r1,r2);
    int mx_value = max(l1,l2);

    if(mx_value<=mn_value) cout << mx_value << " " << mn_value << endl;
    else cout << "-1" << endl;

    return 0;
}