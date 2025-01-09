#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    do
    {
        int val = N%10;

        cout << val << " ";
        N /= 10;
    }
    while(N!=0);
    cout << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}