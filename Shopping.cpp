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
int main()
{

    FASTIO;

    int tk;
    cin >> tk;

    if(tk>1000)
    {
        cout << "I will buy Punjabi" << endl;
        tk -= 1000;
        if(tk >= 500)
        {
            cout << "I will buy new shoes" << endl;
            cout << "Alisa will buy new shoes" << endl;
        }
    }
    else
    {
        cout << "Bad luck!" << endl;
    }

    return 0;
}