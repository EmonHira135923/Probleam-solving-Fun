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
bool solve(string word)
{

    int i=0,j=word.size()-1;

    while(i<j)
    {
        if(word[i]!=word[j])
        {
            return false;
            break;
        }
        i++;
        j--;
    }
    return true;

}
int main()
{

    FASTIO;

    string word;
    cin >> word;

    bool flag = solve(word);

    if(flag) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;


    return 0;
}