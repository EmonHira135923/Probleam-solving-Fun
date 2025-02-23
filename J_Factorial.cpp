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
ll solve(ll i,ll N)
{

    if(i==N+1) return 1;
    ll ans = solve(i+1,N);
    return  ans *= i;

}
int main()
{

    FASTIO;

    ll N;
    cin >> N;

    ll res =  solve(1,N);

    cout << res << endl;

    return 0;
}