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

    string word;
    cin >> word;

    int cnt_p,cnt_t,draw_t_p;
    cnt_p = 0,cnt_t = 0;

    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='T') cnt_t++;
        else if(word[i]=='P') cnt_p++;
        else if(word[i]=='P' && word[i]=='T') draw_t_p++;
    }

    if(cnt_p>cnt_t) cout << "Pathaan" << endl;
    else if(cnt_t>cnt_p) cout << "Tiger" << endl;
    else cout << "Draw" << endl;



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