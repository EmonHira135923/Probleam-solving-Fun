#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{

    int N;
    cin >> N;

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    sort(value.begin(),value.end());
    for(int val : value)
    {
        cout << val << " ";
    }
    cout << endl;

    reverse(value.begin(),value.end());

    for(int v:value)
    {
        cout << v << " ";
    }
    cout << endl;

}
int main()
{

    FASTIO;

    solve();

    return 0;
}