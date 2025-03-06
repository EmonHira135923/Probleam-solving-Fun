#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{

    string s;
    cin >> s;
    vector<int> freq(26,0);

    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }

    set<int> fixvalue;

    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]>0)
        {
            fixvalue.insert(freq[i]);
        }
    }

    if(fixvalue.size()<=1) yes
    else no

}
int main()
{

    FASTIO;

    solve();

    return 0;
}