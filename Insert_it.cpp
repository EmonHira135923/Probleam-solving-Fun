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

    int N;
    cin >> N;
    
    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    int M;
    cin >> M;
    
    vector<int> val(M);
    for(int i=0;i<M;i++) cin >> val[i];

    int x;
    cin >> x;

    value.insert(value.begin()+x,val.begin(),val.end());

    for(int ans : value)
    {
        cout << ans << " ";
    }
    cout << endl;

}
int main()
{

    FASTIO;

    solve();

    return 0;
}