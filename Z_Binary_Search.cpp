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

    sort(value.begin(),value.end());

    while(Q--)
    {
        ll val;
        cin >> val;

        bool flag = false;

        ll l,r;
        l = 0,r=N-1;

        while(l<=r)
        {
            ll mid = (l+r)/2;

            if(value[mid]==val)
            {
                flag = true;
                break;
            }
            if(val>value[mid]) l = mid+1;
            else r = mid - 1;
        }

        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;
    }

}
int main()
{

    FASTIO;

    solve();

    return 0;
}