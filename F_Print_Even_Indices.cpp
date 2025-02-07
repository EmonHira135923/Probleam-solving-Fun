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
void solve(vector<int> &value,int N,int i)
{

   if(i==N) return;
   solve(value,N,i+1);
   if(i%2==0) cout << value[i] << " ";

}
int main()
{

    FASTIO;

    int N;
    cin >> N;

    vector<int> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    solve(value,N,0);

    return 0;
}