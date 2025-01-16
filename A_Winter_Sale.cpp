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

    double a,b;
    cin >> a >> b;

    double disscount = b/(1-(a/100));

    cout << fixed << setprecision(2) << disscount << endl;

    return 0;
}