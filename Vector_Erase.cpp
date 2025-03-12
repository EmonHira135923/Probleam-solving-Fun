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

    ll N;
    cin >> N;
    
    vector<ll> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    ll pos;
    cin >> pos;

    ll val,ans;
    cin >> val >> ans;

    value.erase(value.begin()+(pos-1));
    value.erase(value.begin()+(val-1),value.begin()+(ans-1));

    cout << value.size() << endl;

    for(ll x:value)
    {
        cout << x << " ";
    }
    cout << endl;

}
int main()
{

    FASTIO;

    solve();

    return 0;
}