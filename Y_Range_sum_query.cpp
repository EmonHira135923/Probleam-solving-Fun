#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{

    ll N,Q;
    cin >> N >> Q;
    
    vector<ll> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    vector<ll> prefix_sum(N);
    prefix_sum[0] = value[0];
    for(int i=1;i<N;i++)
    {
        prefix_sum[i] = value[i] + prefix_sum[i-1];
    }

    while(Q--)
    {
        ll l,r;
        cin >> l >> r;
        l--;
        r--;

        ll sum  = 0;

        if(l==0) sum = prefix_sum[r];
        else  sum = prefix_sum[r] - prefix_sum[l-1];

        cout << sum << endl;
    }

}
int main()
{

    FASTIO;

    solve();

    return 0;
}