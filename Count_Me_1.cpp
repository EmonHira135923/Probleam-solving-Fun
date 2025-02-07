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
void solve()
{

    int N;
    cin >> N;

    vector<int> value(N);
    for(int &insert : value) cin >> insert;

    int val_2,val_3;
    val_2 = 0,val_3 = 0;

    for(int i=0;i<N;i++)
    {
        if(value[i]%2==0) val_2++;
        else if(value[i]%2==0 && value[i]%3==0) val_2++;
        else if(value[i]%3==0) val_3++;
    }

    cout << val_2 << " " << val_3 << endl;

}
int main()
{

    FASTIO;

    solve();

    // int t;
    // cin >> t;

    // while(t--)
    // {
    //     solve();
    // }

    return 0;
}