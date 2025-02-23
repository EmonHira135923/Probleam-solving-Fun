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

    int row_x = row-1;
    int col_x = col - 1;

    for(int i=0;i<col;i++)
    {
        cout << value[row_x][i] << " ";
    }
    cout << endl;
    for(int i=0;i<row;i++)
    {
        cout << value[i][col_x] << " ";
    }
    cout << endl;

    

    return 0;
}