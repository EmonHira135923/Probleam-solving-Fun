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
    int sp = N;
    int st = 2*i-1;
    if(i==N+1) return;
    cout << string(sp-i,' ') << string(st,'*') << endl;
    solve(i+1,N);
    
}
int main()
{

    FASTIO;

    int N;
    cin >> N;
    solve(1,N);

    return 0;
}