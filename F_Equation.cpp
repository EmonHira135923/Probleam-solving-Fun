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

ll solve(ll a,ll b)
{

    ll result = 1;
    for(ll i=0;i<b;i++) 
    {
        result *= a;
    } 

    return result;

}
int main()
{

    FASTIO;

    ll a,b;
    cin >> a >> b;

    ll ans = 0;

    for(ll i=0;i<=b;i+=2)
    {
        ans += solve(a,i);
    }

    
    cout << ans-1 << endl;

    return 0;
}