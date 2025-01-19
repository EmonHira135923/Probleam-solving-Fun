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

    string s;
    cin >> s;

    int sum = 0;

    for(int i=0;i<s.size();i++)
    {
        sum += s[i] - '0';
    }

    cout << sum << endl;




    return 0;
}