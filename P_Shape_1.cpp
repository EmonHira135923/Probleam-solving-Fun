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

    int N;
    cin >> N;

    int K = N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=K;j++)
        {
            cout << "*";
        }
        K--;
        cout << endl;
    }

    return 0;
}