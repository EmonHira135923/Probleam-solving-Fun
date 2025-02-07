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
void solve(int i)
{
    if(i==0) return;

    int value = i%10;
    solve(i/10);

    cout << value << " ";


}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        solve(N);

        if(N==0) cout << "0";
        cout << endl;
    }

    return 0;
}