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

    ll sum = 0;

    for(int i=1;i<=N;i++)
    {
        sum += (N+1);
    }

    cout << sum/2 << endl;

    return 0;
}