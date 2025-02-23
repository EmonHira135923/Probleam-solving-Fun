#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int N;
    cin >> N;
    int S, K;
    S =((N+7)/2)+1;
    
    K = 1;
    for(int i = 1; i <= ((N + 7) / 2) + 2; i++)
    {
        for(int j = 1; j <= S; j++)
        {

            cout << " ";
        }
        for(int j = 1; j <= K; j++)
        {
            cout << "*";
        }
        K += 2;
        S--; 
        cout << endl;
    }
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
        
           cout << " ";
        }
        for(int j = 1; j <= N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{

    FASTIO;

    solve();

    return 0;
}