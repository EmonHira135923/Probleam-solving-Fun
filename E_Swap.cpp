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

void is_swap(int &a,int &b)
{
    swap(a,b);
}

int main()
{

    FASTIO;

    int x,y;
    cin >> x >> y;

    is_swap(x,y);

    cout << x << " " << y << endl;

    return 0;
}