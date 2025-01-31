#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{

    FASTIO;

    int N,x;
    cin >> N >> x;

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    x = x%N;

    vector<int> ans;
    for(int i=N-x;i<N;i++)
    {
        ans.push_back(value[i]);
    }

    for(int i=0;i<N-x;i++)
    {
        ans.push_back(value[i]);
    }

    for(int i=0;i<N;i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}