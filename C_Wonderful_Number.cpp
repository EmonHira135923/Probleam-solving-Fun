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

bool is_bit(int N)
{
    return (N&1)==0;
}

bool is_pallindrome(int N)
{
    string word = "";

    while(N>0)
    {
        word += (N%2) + '0';
        N /= 2;
    }

    string ans = word;
    reverse(ans.begin(),ans.end());

    return (word==ans);

}

void solve()
{
    int N;
    cin >> N;

    if(!is_bit(N) && is_pallindrome(N)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{

    FASTIO;

    solve();

    return 0;
}