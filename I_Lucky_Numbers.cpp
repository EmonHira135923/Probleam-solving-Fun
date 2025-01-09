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

    int N;
    cin >> N;

    int frist_digit = N%10;
    int last_digit = N/10;

    int ans = frist_digit%last_digit;
    int val = last_digit%frist_digit;

    if(ans==0 || val==0) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}