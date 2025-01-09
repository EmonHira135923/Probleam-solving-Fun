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

    int frist_digit_a = a%10;
    int frist_digit_b = b%10;

    cout << frist_digit_a + frist_digit_b << endl;

    return 0;
}