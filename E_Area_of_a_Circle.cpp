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

    double a;
    cin >> a;

    double ans =  3.141592653 * (a*a);

    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}