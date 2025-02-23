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
vector<int> sort_it(int N)
{
    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    sort(value.begin(),value.end(),greater<int>());

    return value;
}
int main()
{

    FASTIO;

    int N;
    cin >> N;
    vector<int> value = sort_it(N);

    for(int ans : value)
    {
        cout << ans << " ";
    }
    cout << endl;

    value.clear();

    return 0;
}