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

    string word;
    cin >> word;

    int cnt_a,cnt_A,cnt_0;
    cnt_0 = 0,cnt_A = 0,cnt_a = 0;

    for(int i=0;i<word.size();i++)
    {
        if(isupper(word[i])) cnt_A++;
        else if(isdigit(word[i])) cnt_0++;
        else cnt_a++;
    }

    cout << cnt_A << " " << cnt_a << " " << cnt_0 << endl;

}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}