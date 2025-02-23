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
int solve(int i,string word)
{

    if(i==word.size()) return 0;

    word[i] = tolower(word[i]);

    int ans = solve(i+1,word);

    if(word[i]=='a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
    {
        return ans+1;
    }

    return ans;

}
int main()
{

    FASTIO;

    string word;
    getline(cin,word);

    int res = solve(0,word);

    cout << res << endl;

    return 0;
}