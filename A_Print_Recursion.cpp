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
void solve(int i,int N)
{

    if(i==N) return;
    cout << "I love Recursion" << endl;
    solve(i+1,N);

}
int main()
{

    FASTIO;

    int N;
    cin >> N;

    solve(0,N);

    return 0;
}