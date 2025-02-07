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
ll solve(vector<ll> &value,ll N,ll i)
{

   if(i==N) return 0;
   ll ans = solve(value,N,i+1);
   return value[i]+ans;


}
int main()
{

    FASTIO;

    ll N;
    cin >> N;

    vector<ll> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    ll ans = solve(value,N,0);

    cout << ans << endl;

    return 0;
}