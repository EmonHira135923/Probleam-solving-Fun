#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);

int findMax(const vector<int>& value, int index, int N)
{
    if (index == N) 
        return INT_MIN;
    int mx = findMax(value, index + 1, N);

    return max(value[index], mx);
}

void solve()
{
    int N;
    cin >> N;
    vector<int> value(N);
    for (int i = 0; i < N; i++) 
        cin >> value[i];
    int mx = findMax(value, 0, N);

    cout << mx << endl;
}

int main()
{
    FASTIO;
    solve();
    return 0;
}
