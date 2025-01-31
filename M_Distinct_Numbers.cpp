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

    int N;
    cin >> N;

    list<int> value;
    for(int i=0;i<N;i++)
    {
        int v;
        cin >> v;
        value.push_back(v);
    }

    value.sort();
    value.unique();

    int cnt = 0;

    for(auto it=0;it!=value.size();it++)
    {
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}