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

    ll N;
    cin >> N;
    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];
    ll sum = 0;

    for(int i=0;i<N;i++)
    {
        sum += value[i];
    }

    cout << abs(sum) << endl;






    return 0;
}