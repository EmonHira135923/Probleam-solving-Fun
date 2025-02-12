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
void solve(int N,int i)
{

   int st =2*i-1,sp=N-i;
   if(i>N) return;
   solve(N,i+1);
   cout << string(sp,' ') << string(st,'*') << endl;
   

}
int main()
{

    FASTIO;

    int N;
    cin >> N;

    solve(N,1);

    return 0;
}