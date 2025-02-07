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

    int N = word.size();

    vector<int> freq(26,0);
    for(int i=0;i<N;i++)
    {
        freq[word[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            cout << char(i+'a') << " " << "-" << " " << freq[i] << endl;
        }
    }

    

}
int main()
{

    FASTIO;

    solve();

    // int t;
    // cin >> t;

    // while(t--)
    // {
    //     solve();
    // }

    return 0;
}