#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
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
int main()
{

    FASTIO;

    int row,col;
    cin >> row >> col;

    vector<vector<int>> value(row,vector<int>(col));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin >> value[i][j];
        }
    }

    bool flag = true;

    if(row!=col) flag = false;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==row-1 || i==j)
            {
                if(value[i][j] != 1)
                {
                    flag = false;
                }
            }
            else if(value[i][j] != 0)
            {
                flag = false;
            }
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}